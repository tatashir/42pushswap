/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B_to_A.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:14:37 by tatashir          #+#    #+#             */
/*   Updated: 2023/06/07 19:36:37 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static bool	check_lessthan_pivot(t_stack *s, size_t sort_size, int pivot)
{
	size_t	i;

	i = 0;
	while (i < sort_size)
	{
		if (pivot <= s->num[s->top - i])
			return (false);
		i++;
	}
	return (true);
}

static void	collect_smaller(t_stack *s, t_count *c)
{
	rotate(s, "rb");
	c->rb++;
}

static void	collect_bigger(t_stack *a, t_stack *b, t_count *c, int pibot2)
{
	push(a, b, "pa");
	c->pa++;
	if (a->num[a->top] < pibot2)
	{
		rotate(a, "ra");
		c->ra++;
	}
}

static void	process_stack_elem(t_stack *a, t_stack *b, size_t s, t_count c)
{
	fromatob(c.pa - c.ra, a, b);
	restore_stack(a, b, (ssize_t)c.ra, (ssize_t)c.rb);
	fromatob(c.ra, a, b);
	frombtoa(c.rb + s, b, a);
}

void	frombtoa(size_t sortsize, t_stack *a, t_stack *b)
{
	int		pivot1;
	int		pivot2;
	t_count	count;

	if (check_b_issorted(a, b, sortsize))
		return ;
	if (find_pivot(b, sortsize, &pivot1, &pivot2))
		error_exit(a, b);
	init_count(&count);
	while (0 < sortsize)
	{
		if (b->num[b->top] < pivot1)
		{
			if (check_lessthan_pivot(b, sortsize, pivot1))
				break ;
			collect_smaller(b, &count);
		}
		else
			collect_bigger(a, b, &count, pivot2);
		sortsize--;
	}
	process_stack_elem(a, b, sortsize, count);
}
