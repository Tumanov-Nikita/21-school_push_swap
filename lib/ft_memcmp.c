/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:10:12 by mhunter           #+#    #+#             */
/*   Updated: 2021/10/19 13:17:38 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	size_t				i;
	const unsigned char	*first;
	const unsigned char	*second;

	i = 0;
	first = (const unsigned char *)arr1;
	second = (const unsigned char *)arr2;
	while (i < n)
	{
		if (*first != *second)
		{
			return (*first - *second);
		}
		first++;
		second++;
		i++;
	}
	return (0);
}
