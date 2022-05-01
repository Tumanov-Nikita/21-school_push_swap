/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 18:41:37 by mhunter           #+#    #+#             */
/*   Updated: 2022/03/29 20:49:44 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen((char *)src);
	if (size != 0)
	{
		if (size < dest_len)
		{
			return (src_len + size);
		}
		else
		{
			src_len = ft_strlcpy(dest + dest_len, src, size - dest_len);
			return (src_len + dest_len);
		}
	}
	return (src_len);
}
