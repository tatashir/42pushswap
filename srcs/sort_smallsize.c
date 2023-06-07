/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_smallsize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:12:46 by tatashir          #+#    #+#             */
/*   Updated: 2023/06/07 18:06:32 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_stack_a(size_t sortsize, t_stack *stack)
{
	if (sortsize <= 1)
		return ;
	if (sortsize == 2)
	{
		if (stack->num[stack->top] > stack->num[stack->top - 1])
			swap(&stack->num[stack->top], &stack->num[stack->top - 1], "sa");
		return ;
	}
	if (sortsize == 3)
	{
		atob_sort3case(stack);
		return ;
	}
}

void	sort_stackbtoa(size_t sortsize, t_stack *b, t_stack *a)
{
	if (sortsize <= 1)
	{
		push(a, b, "pa");
		return ;
	}
	if (sortsize == 2)
	{
		if (b->num[b->top] < b->num[b->top - 1])
			swap(&b->num[b->top], &b->num[b->top - 1], "sb");
		push(a, b, "pa");
		push(a, b, "pa");
		return ;
	}
	if (sortsize == 3)
	{
		btoa_sort3case(b, a);
		return ;
	}
}
