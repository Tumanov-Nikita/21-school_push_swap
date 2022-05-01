/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:36:02 by mhunter           #+#    #+#             */
/*   Updated: 2021/10/19 18:21:15 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	output;
	int	sign;

	output = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	if (*str == '+' || *str == '-')
	{	
		if (*str == '-')
		{
			sign *= -1;
		}
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		output = output * 10 + (*str - '0');
		str++;
	}
	return (output * sign);
}
