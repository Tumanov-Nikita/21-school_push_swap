/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 14:59:38 by mhunter           #+#    #+#             */
/*   Updated: 2022/04/15 18:53:09 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "lib/libft.h"

void	full_sort_a(t_list **lst_a, int min)
{
	if (count_rb(lst_a, min) < count_rrb(lst_a, min))
	{
		while (ft_is_list_fully_sorted(lst_a) == 0)
		{
			rotate_stack(lst_a);
			ft_putstr_fd("ra\n", 1);
		}
	}
	else
	{
		while (ft_is_list_fully_sorted(lst_a) == 0)
		{
			rev_rotate_stack(lst_a);
			ft_putstr_fd("rra\n", 1);
		}
	}
}

void	mmm_to_b(t_list **lst_a, t_list **lst_b, int *args, int l)
{
	int		len;
	int		med;
	int		max;
	int		min;

	len = 3;
	med = find_median(args, l);
	max = find_max(args, l);
	min = find_min(args, l);
	while (ft_lsttssize(*lst_a) != 3)
	{
		if ((*lst_a)->v == med || (*lst_a)->v == max || (*lst_a)->v == min)
		{
			ft_ra(lst_a);
			len--;
		}
		else
			ft_p(lst_a, lst_b, 'b');
	}
}

int	main_sort(t_list **lst_a, t_list **lst_b, int *args, int len)
{
	int	elem;

	if (ft_is_list_fully_sorted(lst_a))
		return (0);
	if (len == 2)
	{
		ft_pairsort(lst_a);
		return (0);
	}
	if (len == 5)
	{
		ft_five_sort(lst_a, lst_b);
		full_sort_a(lst_a, find_min(args, len));
		return (0);
	}
	mmm_to_b(lst_a, lst_b, args, len);
	ft_triplesort(lst_a);
	while (ft_lsttssize(*lst_b) != 0)
	{
		analize(lst_a, lst_b);
		elem = choose_val(lst_b);
		apply_ops(lst_a, lst_b, elem, choose_way(find_elem(lst_b, elem)));
	}
	return (0);
}

int	main(int argc, char	*argv[])
{
	int		*args;
	t_list	*lst_a;
	t_list	*lst_b;

	if (argc == 1)
		return (0);
	args = malloc(sizeof(int) * (cnt_n(argc, argv)));
	if (init(argc, argv, args, &lst_a) && ft_chckm(args, cnt_n(argc, argv)))
	{
		main_sort(&lst_a, &lst_b, args, cnt_n(argc, argv));
		full_sort_a(&lst_a, find_min(args, cnt_n(argc, argv)));
	}
	else
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	return (0);
}
