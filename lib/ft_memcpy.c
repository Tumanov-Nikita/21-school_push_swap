/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:03:50 by mhunter           #+#    #+#             */
/*   Updated: 2021/11/07 15:00:05 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	const char	*str1;
	char		*str2;

	i = 0;
	if (!dst && !src)
		return (NULL);
	str1 = src;
	str2 = dst;
	while (i < n)
	{
		str2[i] = str1[i];
		i++;
	}
	return (dst);
}
