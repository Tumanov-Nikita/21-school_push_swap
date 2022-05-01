/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:18:53 by mhunter           #+#    #+#             */
/*   Updated: 2022/03/29 20:50:18 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_check(char *strB, char *strA, size_t lengths, size_t A_len)
{
	size_t	shift;
	size_t	a_counter;
	size_t	i;

	i = 0;
	while ((char)strB[i] != '\0' && i <= lengths - A_len)
	{
		a_counter = 0;
		shift = 0;
		while ((char)strB[i + shift] != '\0' && shift < A_len)
		{
			if ((char)strB[i + shift] == (char)strA[shift])
			{
				a_counter++;
				if (a_counter == A_len)
					return ((char *)strB + i);
			}
			shift++;
		}
		i++;
	}
	return (NULL);
}

char	*ft_strnstr(const char *strB, const char *strA, size_t n)
{
	size_t	a_len;

	a_len = ft_strlen((char *)strA);
	if (a_len == 0)
		return ((char *)strB);
	if (n != 0)
		return (ft_check((char *)strB, (char *)strA, n, a_len));
	return (NULL);
}
