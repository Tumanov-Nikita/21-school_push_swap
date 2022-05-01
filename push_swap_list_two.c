/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_list_two.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 20:15:09 by mhunter           #+#    #+#             */
/*   Updated: 2022/03/30 22:18:52 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "lib/libft.h"

void	ft_pairsort(t_list	**lst)
{
	int	f;
	int	s;

	f = (*lst)->v;
	s = (*lst)->next->v;
	if (f > s)
	{
		swap_stack(lst);
		ft_putstr_fd("sa\n", 1);
	}
}

void	ft_triplesort(t_list **lst)
{
	int		f;
	int		s;
	int		t;

	f = (*lst)->v;
	s = (*lst)->next->v;
	t = (*lst)->next->next->v;
	if (f < s && f < t && t < s)
	{
		rev_rotate_stack(lst);
		swap_stack(lst);
		ft_putstr_fd("rra\nsa\n", 1);
	}
	else if (f < s && f > t && t < s)
		ft_rra(lst);
	else if (f > s && f > t && s > t)
	{
		swap_stack(lst);
		rev_rotate_stack(lst);
		ft_putstr_fd("sa\nrra\n", 1);
	}
	else if (f > s && t > s && f < t)
		ft_sa(lst);
	else if (f > s && t > s && f > t)
		ft_ra(lst);
}

void	ft_five_sort(t_list **lst_a, t_list **lst_b)
{
	int	elem;

	ft_p(lst_a, lst_b, 'b');
	ft_p(lst_a, lst_b, 'b');
	ft_triplesort(lst_a);
	while (ft_lsttssize(*lst_b) != 0)
	{
		analize(lst_a, lst_b);
		elem = choose_val(lst_b);
		apply_ops(lst_a, lst_b, elem, choose_way(find_elem(lst_b, elem)));
	}
}

void	apply_ops(t_list **lst_a, t_list **lst_b, int val, int way)
{
	t_list	*p;

	p = find_elem(lst_b, val);
	if (p)
	{
		if (way == 1)
			first_way(lst_a, lst_b, p);
		if (way == 2)
			second_way(lst_a, lst_b, p);
		if (way == 3)
			third_way(lst_a, lst_b, p);
		if (way == 4)
			fourth_way(lst_a, lst_b, p);
		push_stack(lst_b, lst_a);
		ft_putstr_fd("pa\n", 1);
	}
}
