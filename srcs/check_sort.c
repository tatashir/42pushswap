/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 05:15:14 by tkirihar          #+#    #+#             */
/*   Updated: 2021/12/18 00:30:06 by tkirihar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// スタックが昇順になっているか確認する関数
bool	check_sort(t_stack *stack)
{
	size_t	i;

	i = 0;
	while (i < stack->top - 1)
	{
		if (stack->num[stack->top - i] > stack->num[stack->top - (i + 1)])
			return (false);
		i++;
	}
	return (true);
}

// sort_size分のスタックAが昇順になっているか確認する関数
bool	check_sort_A_to_B(t_stack *stack, size_t sort_size)
{
	size_t	i;

	if (sort_size <= 3)
	{
		short_sort_A_to_B(sort_size, stack);
		return (true);
	}
	i = 0;
	while (i < sort_size - 1)
	{
		if (stack->num[stack->top - i] > stack->num[stack->top - (i + 1)])
			return (false);
		i++;
	}
	return (true);
}

// スタックBからAにpush_size分pushする関数
static void	push_B_to_A(t_stack *stack_b, t_stack *stack_a, size_t push_size)
{
	while (push_size > 0)
	{
		push(stack_a, stack_b, "pa");
		push_size--;
	}
}

// sort_size分のスタックBが降順になっているか確認し、なっていたらスタックAにpushする関数
bool	check_sort_B_to_A(t_stack *stack_a, t_stack *stack_b, size_t sort_size)
{
	size_t	i;

	if (sort_size <= 3)
	{
		short_sort_B_to_A(sort_size, stack_b, stack_a);
		return (true);
	}
	i = 0;
	while (i < sort_size - 1)
	{
		if (stack_b->num[stack_b->top - i] < \
			stack_b->num[stack_b->top - (i + 1)])
			return (false);
		i++;
	}
	push_B_to_A(stack_b, stack_a, sort_size);
	return (true);
}
