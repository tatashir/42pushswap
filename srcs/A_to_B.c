/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_to_B.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:17:40 by tkirihar          #+#    #+#             */
/*   Updated: 2023/06/07 16:00:55 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static bool	check_pivot2_or_more(t_stack *stack, size_t sort_size, int pivot2)
{
	size_t	i;

	i = 0;
	while (i < sort_size)
	{
		if (stack->num[stack->top - i] < pivot2)
			return (false);
		i++;
	}
	return (true);
}

static void	recursive_process(t_stack *stack_a, t_stack *stack_b,
							size_t sort_size, t_count count)
{
	restore_stack(stack_a, stack_b, (ssize_t)count.ra, (ssize_t)count.rb);
	A_to_B(count.ra + sort_size, stack_a, stack_b);
	B_to_A(count.rb, stack_b, stack_a);
	B_to_A(count.pb - count.rb, stack_b, stack_a);
}

static void	collect_less_than_pivot2(t_stack *stack_a, t_stack *stack_b,
									t_count *count, int pivot1)
{
	push(stack_b, stack_a, "pb");
	count->pb++;
	if (stack_b->num[stack_b->top] >= pivot1)
	{
		rotate(stack_b, "rb");
		count->rb++;
	}
}

static void	collect_pivot2_or_more(t_stack *stack_a, t_count *count)
{
	rotate(stack_a, "ra");
	count->ra++;
}

void	A_to_B(size_t sort_size, t_stack *stack_a, t_stack *stack_b)
{
	int		pivot1;
	int		pivot2;
	t_count	count;

	if (check_sort_A_to_B(stack_a, sort_size))
		return ;
	if (search_pivot(stack_a, sort_size, &pivot1, &pivot2))
		error_exit(stack_a, stack_b);
	init_count(&count);
	while (sort_size > 0)
	{
		if (stack_a->num[stack_a->top] >= pivot2)
		{
			if (check_pivot2_or_more(stack_a, sort_size, pivot2))
				break ;
			collect_pivot2_or_more(stack_a, &count);
		}
		else
			collect_less_than_pivot2(stack_a, stack_b, &count, pivot1);
		sort_size--;
	}
	recursive_process(stack_a, stack_b, sort_size, count);
}
