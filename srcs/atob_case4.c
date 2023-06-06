/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atob_case4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 22:50:48 by tatashir          #+#    #+#             */
/*   Updated: 2023/06/06 22:59:23 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	atob_case4(t_stack *stack, size_t n1, size_t n2)
{
	swap(&stack->num[n1], &stack->num[n2], "sa");
	rotate(stack, "ra");
	swap(&stack->num[n1], &stack->num[n2], "sa");
	rrotate(stack, "rra");
	swap(&stack->num[n1], &stack->num[n2], "sa");
}
