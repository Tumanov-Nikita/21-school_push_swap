/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_operates_three.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 20:49:38 by mhunter           #+#    #+#             */
/*   Updated: 2022/03/30 22:18:52 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "lib/libft.h"

void	swap_two_stacks(t_list **lst_a, t_list **lst_b)
{
	swap_stack(lst_a);
	swap_stack(lst_b);
}

void	rotate_two_stacks(t_list **lst_a, t_list **lst_b)
{
	rotate_stack(lst_a);
	rotate_stack(lst_b);
}

void	rev_rotate_two_stacks(t_list **lst_a, t_list **lst_b)
{
	rev_rotate_stack(lst_a);
	rev_rotate_stack(lst_b);
}
