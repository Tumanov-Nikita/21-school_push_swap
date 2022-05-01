/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:59:39 by mhunter           #+#    #+#             */
/*   Updated: 2021/11/04 19:43:36 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	char	*out;
	char	sym;
	size_t	i;

	out = (char *)arr;
	sym = (char)c;
	i = 0;
	while (n--)
	{
		if (out[i] == sym)
			return (&out[i]);
		i++;
	}
	return (NULL);
}
