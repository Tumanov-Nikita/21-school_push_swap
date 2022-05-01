/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 19:43:23 by mhunter           #+#    #+#             */
/*   Updated: 2021/11/06 13:14:39 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	unsigned long	i;
	void			*p;

	i = 0;
	p = malloc(num * size);
	if (!p)
	{
		return (NULL);
	}
	ft_bzero(p, num * size);
	return (p);
}
