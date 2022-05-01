/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utilities_three.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 20:33:51 by mhunter           #+#    #+#             */
/*   Updated: 2022/03/30 22:18:52 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "lib/libft.h"

t_list	*ft_lsttsmin(t_list *lst)
{
	int		min;
	t_list	*p_min;

	min = INT_MAX;
	p_min = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (lst->v < min)
		{
			min = lst->v;
			p_min = lst;
		}
		lst = lst->next;
	}
	return (p_min);
}

int	ft_is_list_sorted(t_list	**lst)
{
	t_list	*p;
	t_list	*p_min;
	int		tmp;

	p_min = ft_lsttsmin(*lst);
	p = ft_lsttsmin(*lst);
	while (p->next)
	{
		if (p->next->v < p->v)
			return (0);
		p = p->next;
	}
	tmp = p->v;
	if (p_min == *lst)
		return (1);
	else if ((*lst)->v < tmp)
		return (0);
	p = *lst;
	while (p->next != p_min)
	{
		if (p->next->v < p->v)
			return (0);
		p = p->next;
	}
	return (1);
}

int	ft_lstmax(t_list	*lst)
{
	int	max;

	max = INT_MIN;
	if (!lst)
		return (0);
	while (lst)
	{
		if (lst->v > max)
			max = lst->v;
		lst = lst->next;
	}
	return (max);
}

int	ft_lstmin(t_list	*lst)
{
	int	min;

	min = INT_MAX;
	if (!lst)
		return (0);
	while (lst)
	{
		if (lst->v < min)
			min = lst->v;
		lst = lst->next;
	}
	return (min);
}

int	init(int argc, char *argv[], int *args, t_list **lst_a)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < argc - 1)
	{
		count = fill_stack(count, argv[i + 1], args, lst_a);
		i++;
	}
	return (1);
}
