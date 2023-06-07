/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   restore_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 20:30:59 by tatashir          #+#    #+#             */
/*   Updated: 2023/06/07 15:58:28 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	restore_stack(t_stack *a, t_stack *b, ssize_t countra, ssize_t countrb)
{
	while (0 < countra && 0 < countrb)
	{
		rrotate_ab(a, b);
		countra--;
		countrb--;
	}
	while (0 < countra--)
		rrotate(a, "rra");
	while (0 < countrb--)
		rrotate(b, "rrb");
}
