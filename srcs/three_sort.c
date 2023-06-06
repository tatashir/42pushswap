/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:58:23 by tkirihar          #+#    #+#             */
/*   Updated: 2023/06/06 23:31:12 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// スタックの要素数が3のときに昇順にソートする関数
void	three_sort(t_stack *stack)
{
	size_t	n1;
	size_t	n2;
	size_t	n3;

	n1 = stack->top;
	n2 = stack->top - 1;
	n3 = stack->top - 2;
	if (check_3sort(stack->num[n3], stack->num[n1], stack->num[n2]))
		rrotate(stack, "rra");
	else if (check_3sort(stack->num[n2], stack->num[n1], stack->num[n3]))
		swap(&stack->num[n1], &stack->num[n2], "sa");
	else if (check_3sort(stack->num[n2], stack->num[n3], stack->num[n1]))
		rotate(stack, "ra");
	else if (check_3sort(stack->num[n3], stack->num[n2], stack->num[n1]))
	{
		swap(&stack->num[n1], &stack->num[n2], "sa");
		rrotate(stack, "rra");
	}
	else if (check_3sort(stack->num[n1], stack->num[n3], stack->num[n2]))
	{
		swap(&stack->num[n1], &stack->num[n2], "sa");
		rotate(stack, "ra");
	}
}

// A_to_Bでsort_sizeが3のときに昇順にソートする関数
void	three_sort_A_to_B(t_stack *stack)
{
	size_t	n1;
	size_t	n2;
	size_t	n3;

	n1 = stack->top;
	n2 = stack->top - 1;
	n3 = stack->top - 2;
	if (check_3sort(stack->num[n3], stack->num[n1], stack->num[n2]))
		atob_case1(stack, n1, n2);
	else if (check_3sort(stack->num[n2], stack->num[n1], stack->num[n3]))
		atob_case2(stack, n1, n2);
	else if (check_3sort(stack->num[n2], stack->num[n3], stack->num[n1]))
		atob_case3(stack, n1, n2);
	else if (check_3sort(stack->num[n3], stack->num[n2], stack->num[n1]))
		atob_case4(stack, n1, n2);
	else if (check_3sort(stack->num[n1], stack->num[n3], stack->num[n2]))
		atob_case5(stack, n1, n2);
}

// B_to_Aでsort_sizeが3のときに降順にソートする関数
void	three_sort_B_to_A(t_stack *stack_b, t_stack *stack_a)
{
	size_t	n1;
	size_t	n2;
	size_t	n3;

	n1 = stack_b->top;
	n2 = stack_b->top - 1;
	n3 = stack_b->top - 2;
	if (check_3sort(stack_b->num[n3], stack_b->num[n1], stack_b->num[n2]))
		btoa_case1(stack_b, stack_a, n1, n2);
	else if (check_3sort(stack_b->num[n2], stack_b->num[n1],
			stack_b->num[n3]))
		btoa_case2(stack_b, stack_a, n1, n2);
	else if (check_3sort(stack_b->num[n2], stack_b->num[n3],
			stack_b->num[n1]))
		btoa_case3(stack_b, stack_a, n1, n2);
	else if (check_3sort(stack_b->num[n1], stack_b->num[n2],
			stack_b->num[n3]))
		btoa_case4(stack_b, stack_a, n1, n2);
	else if (check_3sort(stack_b->num[n1], stack_b->num[n3],
			stack_b->num[n2]))
		btoa_case5(stack_b, stack_a);
	else if (check_3sort(stack_b->num[n3], stack_b->num[n2],
			stack_b->num[n1]))
		btoa_case6(stack_b, stack_a);
}
