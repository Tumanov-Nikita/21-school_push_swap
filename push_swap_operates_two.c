/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_operates_two.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:39:24 by mhunter           #+#    #+#             */
/*   Updated: 2022/03/30 22:18:52 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "lib/libft.h"

void	ft_ra(t_list **lst_a)
{
	rotate_stack(lst_a);
	ft_putstr_fd("ra\n", 1);
}

void	ft_rra(t_list **lst_a)
{
	rev_rotate_stack(lst_a);
	ft_putstr_fd("rra\n", 1);
}

void	ft_p(t_list **lst_a, t_list **lst_b, char target)
{
	if (target == 'a')
	{
		push_stack(lst_b, lst_a);
		ft_putstr_fd("pa\n", 1);
	}
	else if (target == 'b')
	{
		push_stack(lst_a, lst_b);
		ft_putstr_fd("pb\n", 1);
	}
}

void	ft_sa(t_list **lst_a)
{
	swap_stack(lst_a);
	ft_putstr_fd("sa\n", 1);
}

int	fill_stack(int count, char *var, int *args, t_list **lst_a)
{
	int		j;
	char	**nums;

	nums = ft_split(var, ' ');
	j = 0;
	while (nums[j])
	{
		if (ft_isnumber(nums[j]) && ft_checknum(nums[j]))
		{
			args[count] = ft_atoi(nums[j]);
			ft_lsttsadd_back(lst_a, ft_lsttsnew(ft_atoi(nums[j])));
			count++;
		}
		else
			return (0);
		j++;
	}
	free_nums(nums, j);
	free(nums);
	return (count);
}
