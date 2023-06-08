/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:57:58 by taichi            #+#    #+#             */
/*   Updated: 2023/06/08 18:26:58 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap(int *n1, int *n2, char *m)
{
	int	tmp;

	tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
	if (ft_strncmp(m, "ss", 2))
		ft_putendl_fd(m, 1);
}

void	swap_ab(t_stack *a, t_stack *b)
{
	swap(&a->num[a->top], &a->num[a->top - 1], "ss");
	swap(&b->num[b->top], &b->num[b->top - 1], "ss");
	ft_putendl_fd("ss", 1);
}
