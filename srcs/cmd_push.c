/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:37:47 by tatashir          #+#    #+#             */
/*   Updated: 2023/06/07 15:43:57 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push(t_stack *a, t_stack *b, char *m)
{
	a->num[a->top + 1] = b->num[b->top];
	a->top++;
	b->top--;
	ft_putendl_fd(m, STDOUT_FILENO);
}
