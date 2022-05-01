/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:31:25 by mhunter           #+#    #+#             */
/*   Updated: 2022/03/29 20:59:38 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list_l	*ft_lstmap(t_list_l *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list_l	*curr;
	t_list_l	*new_elem;

	if (!lst)
		return (NULL);
	curr = NULL;
	while (lst)
	{
		new_elem = ft_lstnew(f(lst->content));
		if (!new_elem)
		{
			ft_lstclear(&curr, del);
			break ;
		}
		ft_lstadd_back(&curr, new_elem);
		lst = lst->next;
	}
	return (curr);
}
