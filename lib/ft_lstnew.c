/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:04:17 by mhunter           #+#    #+#             */
/*   Updated: 2022/03/29 20:58:33 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list_l	*ft_lstnew(void *content)
{
	t_list_l	*out;

	out = (t_list_l *)malloc(sizeof(t_list_l));
	if (!out)
		return (NULL);
	out->content = content;
	out->next = NULL;
	return (out);
}
