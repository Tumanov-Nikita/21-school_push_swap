/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_counters_two.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 18:12:22 by mhunter           #+#    #+#             */
/*   Updated: 2022/03/30 22:18:52 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "lib/libft.h"

int	count_ra_formax(t_list	**lst, int max)
{
	int		count;
	t_list	*p;

	count = 1;
	p = *lst;
	while (p && p->v != max)
	{
		p = p->next;
		count++;
	}
	if (count == ft_lsttssize(*lst))
		return (0);
	return (count);
}

int	count_rra_formax(t_list **lst, int max)
{
	int		count;
	t_list	*p;

	count = 0;
	p = *lst;
	while (p && p->v != max)
		p = p->next;
	if ((*lst)->v == max)
		return (ft_lsttssize(*lst) - 1);
	while (p->next)
	{
		p = p->next;
		count++;
	}
	if (count == ft_lsttssize(*lst))
		return (0);
	return (count);
}

int	count_ra(t_list	**lst, int val)
{
	t_list	*p;
	t_list	*last;
	int		prev;
	int		count;

	count = 0;
	p = *lst;
	last = ft_lsttslast(*lst);
	prev = last->v;
	if (val > ft_lstmax(*lst) || val < ft_lstmin(*lst))
	{
		return (count_ra_formax(lst, ft_lstmax(*lst)));
	}
	while (p && (!(val > prev) || !(val < p->v)))
	{
		count++;
		prev = p->v;
		p = p->next;
	}
	if (!p)
		return (0);
	return (count);
}

int	count_rra(t_list	**lst, int val)
{
	t_list	*p;
	int		count;

	p = *lst;
	count = 0;
	if (val > ft_lstmax(*lst) || val < ft_lstmin(*lst))
	{
		return (count_rra_formax(lst, ft_lstmax(*lst)));
	}
	while (p->v < val)
		p = p->next;
	while (p->next)
	{
		count++;
		p = p->next;
	}
	return (count + 1);
}
