/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_operates.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 12:07:17 by mhunter           #+#    #+#             */
/*   Updated: 2022/03/30 22:18:52 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "lib/libft.h"

void	swap_stack(t_list	**stack)
{
	t_list	*temp;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	temp = *stack;
	*stack = (*stack)->next;
	temp->next = (*stack)->next;
	(*stack)->next = temp;
}

void	push_stack(t_list	**stack_src, t_list	**stack_dest)
{
	t_list	*temp;

	if (*stack_src == NULL)
		return ;
	temp = *stack_src;
	*stack_src = (*stack_src)->next;
	ft_lsttsadd_front(stack_dest, temp);
}

void	rotate_stack(t_list	**stack)
{
	t_list	*temp;
	t_list	*last;

	if (*stack == NULL)
		return ;
	last = ft_lsttslast(*stack);
	last->next = *stack;
	temp = *stack;
	*stack = (*stack)->next;
	temp->next = NULL;
}

void	rev_rotate_stack(t_list	**stack)
{
	t_list	*temp;
	t_list	*last;

	if (*stack == NULL)
		return ;
	last = ft_lsttslast(*stack);
	temp = *stack;
	while (temp->next != last)
		temp = temp->next;
	temp->next = NULL;
	last->next = *stack;
	*stack = last;
}
