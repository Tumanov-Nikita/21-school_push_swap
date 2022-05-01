/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 20:38:49 by mhunter           #+#    #+#             */
/*   Updated: 2021/11/07 13:32:56 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t				i;
	const unsigned char	*first;
	const unsigned char	*second;

	i = 0;
	first = (const unsigned char *)str1;
	second = (const unsigned char *)str2;
	while (i < n && (first[i] != '\0' || second[i] != '\0'))
	{
		if (first[i] != second[i])
			return (first[i] - second[i]);
		i++;
	}
	return (0);
}
