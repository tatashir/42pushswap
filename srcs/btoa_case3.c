/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btoa_case3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 23:13:36 by tatashir          #+#    #+#             */
/*   Updated: 2023/06/06 23:16:44 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	btoa_case3(t_stack *stack_b, t_stack *stack_a,
		size_t n1, size_t n2)
{
	push(stack_a, stack_b, "pa");
	swap(&stack_b->num[n1], &stack_b->num[n2], "sb");
	push(stack_a, stack_b, "pa");
	push(stack_a, stack_b, "pa");
}
