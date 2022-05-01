/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 18:00:49 by mhunter           #+#    #+#             */
/*   Updated: 2022/03/30 22:18:52 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "lib/libft.h"

void	ft_lsttsadd_back(t_list **lst, t_list *new)
{
	t_list	*curr;

	if (!new)
		return ;
	if (*lst)
	{
		curr = *lst;
		while (curr->next)
			curr = curr->next;
		curr->next = new;
	}
	else
		*lst = new;
}

void	ft_lsttsadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

int	ft_lsttssize(t_list *lst)
{
	int	count;

	count = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

t_list	*ft_lsttsnew(int content)
{
	t_list	*out;

	out = (t_list *)malloc(sizeof(t_list));
	if (!out)
		return (NULL);
	out->v = content;
	out->next = NULL;
	return (out);
}

t_list	*ft_lsttslast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
