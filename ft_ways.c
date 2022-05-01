/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ways.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 20:26:39 by mhunter           #+#    #+#             */
/*   Updated: 2022/03/30 22:18:52 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "lib/libft.h"

int	choose_way(t_list *p)
{
	int	min;
	int	w;

	min = INT_MAX;
	if (min > (p->score_ar + p->score_br - p->score_rr))
	{
		min = (p->score_ar + p->score_br - p->score_rr);
		w = 1;
	}
	if (min > (p->score_arr + p->score_brr - p->score_rrr))
	{
		min = (p->score_arr + p->score_brr - p->score_rrr);
		w = 2;
	}
	if (min > p->score_ar + p->score_brr)
	{
		min = p->score_ar + p->score_brr;
		w = 3;
	}
	if (min > (p->score_arr + p->score_br))
	{
		min = p->score_arr + p->score_br;
		w = 4;
	}
	return (w);
}

void	first_way(t_list **lst_a, t_list **lst_b, t_list	*p)
{
	int	i;

	i = p->score_ar - p->score_rr;
	while (i > 0)
	{
		rotate_stack(lst_a);
		ft_putstr_fd("ra\n", 1);
		i--;
	}
	i = p->score_br - p->score_rr;
	while (i > 0)
	{
		rotate_stack(lst_b);
		ft_putstr_fd("rb\n", 1);
		i--;
	}
	i = p->score_rr;
	while (i > 0)
	{
		rotate_stack(lst_a);
		rotate_stack(lst_b);
		ft_putstr_fd("rr\n", 1);
		i--;
	}
}

void	second_way(t_list **lst_a, t_list **lst_b, t_list	*p)
{
	int	i;

	i = p->score_arr - p->score_rrr;
	while (i > 0)
	{
		rev_rotate_stack(lst_a);
		ft_putstr_fd("rra\n", 1);
		i--;
	}
	i = p->score_brr - p->score_rrr;
	while (i > 0)
	{
		rev_rotate_stack(lst_b);
		ft_putstr_fd("rrb\n", 1);
		i--;
	}
	i = p->score_rrr;
	while (i > 0)
	{
		rev_rotate_stack(lst_a);
		rev_rotate_stack(lst_b);
		ft_putstr_fd("rrr\n", 1);
		i--;
	}
}

void	third_way(t_list **lst_a, t_list **lst_b, t_list	*p)
{
	int	i;

	i = p->score_ar;
	while (i > 0)
	{
		rotate_stack(lst_a);
		ft_putstr_fd("ra\n", 1);
		i--;
	}
	i = p->score_brr;
	while (i > 0)
	{
		rev_rotate_stack(lst_b);
		ft_putstr_fd("rrb\n", 1);
		i--;
	}
}

void	fourth_way(t_list **lst_a, t_list **lst_b, t_list	*p)
{
	int	i;

	i = p->score_arr;
	while (i > 0)
	{
		rev_rotate_stack(lst_a);
		ft_putstr_fd("rra\n", 1);
		i--;
	}
	i = p->score_br;
	while (i > 0)
	{
		rotate_stack(lst_b);
		ft_putstr_fd("rb\n", 1);
		i--;
	}
}
