/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atob_case5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 22:51:07 by tatashir          #+#    #+#             */
/*   Updated: 2023/06/06 22:59:21 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/push_swap.h"

void	atob_case5(t_stack *stack, size_t n1, size_t n2)
{
	rotate(stack, "ra");
	swap(&stack->num[n1], &stack->num[n2], "sa");
	rrotate(stack, "rra");
}
