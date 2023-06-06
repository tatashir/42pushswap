/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btoa_case5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 23:14:57 by tatashir          #+#    #+#             */
/*   Updated: 2023/06/06 23:16:36 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	btoa_case5(t_stack *stack_b, t_stack *stack_a)
{
	rotate(stack_b, "rb");
	push(stack_a, stack_b, "pa");
	push(stack_a, stack_b, "pa");
	rrotate(stack_b, "rrb");
	push(stack_a, stack_b, "pa");
}
