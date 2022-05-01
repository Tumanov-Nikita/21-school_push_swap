/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_counters_one.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 18:12:22 by mhunter           #+#    #+#             */
/*   Updated: 2022/03/30 22:18:52 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "lib/libft.h"

int	count_rb(t_list	**lst, int val)
{
	t_list	*p;
	int		count;

	p = *lst;
	count = 0;
	while (p->v != val)
	{
		count++;
		p = p->next;
	}
	return (count);
}

int	count_rrb(t_list	**lst, int val)
{
	t_list	*p;
	int		count;

	p = *lst;
	count = 1;
	while (p->v != val)
		p = p->next;
	while (p->next)
	{
		count++;
		p = p->next;
	}
	if ((*lst)->v == val)
		return (0);
	return (count);
}
