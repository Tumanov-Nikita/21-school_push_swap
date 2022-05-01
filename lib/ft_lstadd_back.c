/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:36:06 by mhunter           #+#    #+#             */
/*   Updated: 2022/03/29 20:59:07 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list_l **lst, t_list_l *new)
{
	t_list_l	*curr;

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
