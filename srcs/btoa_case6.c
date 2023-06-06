/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btoa_case6.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 22:19:25 by tkirihar          #+#    #+#             */
/*   Updated: 2023/06/06 23:16:31 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	btoa_case6(t_stack *stack_b, t_stack *stack_a)
{
	push(stack_a, stack_b, "pa");
	push(stack_a, stack_b, "pa");
	push(stack_a, stack_b, "pa");
}
