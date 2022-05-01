/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:57:42 by mhunter           #+#    #+#             */
/*   Updated: 2022/03/29 20:59:24 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list_l **lst, void (*del)(void *))
{
	t_list_l	*curr;

	if (!*lst)
		return ;
	while (*lst)
	{
		curr = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = curr;
	}
}
