/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B_to_A.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:18:03 by tkirihar          #+#    #+#             */
/*   Updated: 2023/06/07 18:50:55 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static bool	check_less_than_pivot1(t_stack *stack, size_t sort_size, int pivot1)
{
	size_t	i;

	i = 0;
	while (i < sort_size)
	{
		if (stack->num[stack->top - i] >= pivot1)
			return (false);
		i++;
	}
	return (true);
}

static void	recursive_process(t_stack *stack_a, t_stack *stack_b,
							size_t sort_size, t_count count)
{
	A_to_B(count.pa - count.ra, stack_a, stack_b);
	restore_stack(stack_a, stack_b, (ssize_t)count.ra, (ssize_t)count.rb);
	A_to_B(count.ra, stack_a, stack_b);
	B_to_A(count.rb + sort_size, stack_b, stack_a);
}

static void	collect_less_than_pivot1(t_stack *stack_b, t_count *count)
{
	rotate(stack_b, "rb");
	count->rb++;
}

static void	collect_pivot1_or_more(t_stack *stack_a, t_stack *stack_b,
									t_count *count, int pivot2)
{
	push(stack_a, stack_b, "pa");
	count->pa++;
	if (stack_a->num[stack_a->top] < pivot2)
	{
		rotate(stack_a, "ra");
		count->ra++;
	}
}

void	B_to_A(size_t sort_size, t_stack *stack_b, t_stack *stack_a)
{
	int		pivot1;
	int		pivot2;
	t_count	count;

	if (check_b_issorted(stack_a, stack_b, sort_size))
		return ;
	if (find_pivot(stack_b, sort_size, &pivot1, &pivot2))
		error_exit(stack_a, stack_b);
	init_count(&count);
	while (sort_size > 0)
	{
		if (stack_b->num[stack_b->top] < pivot1)
		{
			if (check_less_than_pivot1(stack_b, sort_size, pivot1))
				break ;
			collect_less_than_pivot1(stack_b, &count);
		}
		else
			collect_pivot1_or_more(stack_a, stack_b, &count, pivot2);
		sort_size--;
	}
	recursive_process(stack_a, stack_b, sort_size, count);
}
