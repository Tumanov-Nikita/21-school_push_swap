/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utilities.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:35:13 by mhunter           #+#    #+#             */
/*   Updated: 2022/03/30 22:18:52 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "lib/libft.h"

int	ft_isnumber(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]) == 1 || str[i] == '-')
			return (1);
		else
			return (0);
		i++;
	}
	return (1);
}

int	ft_checknum(char	*str)
{
	int		sign;
	long	sum;

	sign = 1;
	sum = 0;
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
		sum = sum * 10 + (*str - '0');
		if (sum * sign > INT_MAX || sum * sign < INT_MIN)
			return (0);
		str++;
	}
	return (1);
}

int	find_median(int	*mass, int len)
{
	if (!ft_is_sorted(mass, len))
		ft_masssort(mass, len);
	return (mass[len / 2]);
}

int	find_max(int	*mass, int len)
{
	int	max;
	int	i;

	max = INT_MIN;
	i = 0;
	while (i < len)
	{
		if (mass[i] > max)
			max = mass[i];
		i++;
	}
	return (max);
}

int	find_min(int	*mass, int len)
{
	int	min;
	int	i;

	min = INT_MAX;
	i = 0;
	while (i < len)
	{
		if (mass[i] < min)
			min = mass[i];
		i++;
	}
	return (min);
}
