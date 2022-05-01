/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utilities_two.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 20:11:16 by mhunter           #+#    #+#             */
/*   Updated: 2022/03/30 22:18:52 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "lib/libft.h"

int	ft_is_sorted(int	*mass, int len)
{
	int	i;

	i = 0;
	while (i < len - 1)
	{
		if (mass[i + 1] < mass[i])
			return (0);
		i++;
	}
	return (1);
}

int	cnt_n(int argc, char *argv[])
{
	int		i;
	int		j;
	int		count;
	char	**nums;

	i = 0;
	count = 0;
	while (i < argc - 1)
	{
		nums = ft_split(argv[i + 1], ' ');
		j = 0;
		while (nums[j])
		{
			count++;
			j++;
		}
		free_nums(nums, j);
		free(nums);
		i++;
	}
	return (count);
}

int	ft_masssort(int	*mass, int len)
{
	int	i;
	int	j;
	int	temp;
	int	flag;

	i = 0;
	flag = 0;
	while (i < len - 1)
	{
		j = 0;
		while (j < len - 1 - i)
		{
			if (mass[j] > mass[j + 1])
			{
				flag = 1;
				temp = mass[j];
				mass[j] = mass[j + 1];
				mass[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	return (flag);
}

int	ft_chckm(int	*mass, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (mass[i] == mass[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	free_nums(char **nums, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free(nums[i]);
		i++;
	}
}
