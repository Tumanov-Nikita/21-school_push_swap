/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decision.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 20:28:08 by mhunter           #+#    #+#             */
/*   Updated: 2022/03/30 22:28:05 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "lib/libft.h"

void	analize(t_list	**lst_a, t_list **lst_b)
{
	t_list	*p_b;

	p_b = *lst_b;
	while (p_b)
	{
		p_b->score_br = count_rb(lst_b, p_b->v);
		p_b->score_brr = count_rrb(lst_b, p_b->v);
		p_b->score_ar = count_ra(lst_a, p_b->v);
		p_b->score_arr = count_rra(lst_a, p_b->v);
		if (p_b->score_ar > p_b->score_br)
			p_b->score_rr = p_b->score_br;
		else
			p_b->score_rr = p_b->score_ar;
		if (p_b->score_arr > p_b->score_brr)
			p_b->score_rrr = p_b->score_brr;
		else
			p_b->score_rrr = p_b->score_arr;
		p_b = p_b->next;
	}
}

int	min_ops(t_list *p)
{
	int	min;

	min = INT_MAX;
	if (min > (p->score_ar + p->score_br - p->score_rr))
		min = (p->score_ar + p->score_br - p->score_rr);
	if (min > (p->score_arr + p->score_brr - p->score_rrr))
		min = (p->score_arr + p->score_brr - p->score_rrr);
	if (min > p->score_ar + p->score_brr)
		min = p->score_ar + p->score_brr;
	if (min > (p->score_arr + p->score_br))
		min = p->score_arr + p->score_br;
	return (min);
}

int	choose_val(t_list **lst_b)
{
	int		min;
	int		temp;
	int		val;
	t_list	*p;

	min = INT_MAX;
	p = *lst_b;
	while (p)
	{
		temp = min_ops(p);
		if (min > temp)
		{
			min = temp;
			val = p->v;
		}
		p = p->next;
	}
	return (val);
}

t_list	*find_elem(t_list **lst_b, int val)
{
	t_list	*p;

	p = *lst_b;
	while (p)
	{
		if (p->v == val)
			return (p);
		p = p->next;
	}
	return (NULL);
}

int	ft_is_list_fully_sorted(t_list	**lst)
{
	t_list	*p;

	p = *lst;
	while (p->next)
	{
		if (p->next->v < p->v)
			return (0);
		p = p->next;
	}
	return (1);
}
