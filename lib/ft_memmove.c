/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:29:08 by mhunter           #+#    #+#             */
/*   Updated: 2022/03/29 20:48:41 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	const char	*s;
	const char	*src_last;
	char		*d;
	char		*dst_last;

	if (!dst || !src)
		return (NULL);
	d = dst;
	s = src;
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
	{
		src_last = s + (n - 1);
		dst_last = d + (n - 1);
		while (n--)
			*dst_last-- = *src_last--;
	}
	return (dst);
}
