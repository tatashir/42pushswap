/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fromAtoB.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:46:56 by tatashir          #+#    #+#             */
/*   Updated: 2023/06/07 19:35:51 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static bool	check_biggerthan_pivot(t_stack *s, size_t sortsize, int pivot)
{
	size_t	i;

	i = 0;
	while (i < sortsize)
	{
		if (s->num[s->top - i] < pivot)
			return (false);
		i++;
	}
	return (true);
}

static void	collect_bigger(t_stack *s, t_count *c)
{
	rotate(s, "ra");
	c->ra++;
}

static void	move_lessthan_pivot(t_stack *a, t_stack *b, t_count *c, int pivot)
{
	push(b, a, "pb");
	c->pb++;
	if (pivot <= b->num[b->top])
	{
		rotate(b, "rb");
		c->rb++;
	}
}

static void	stack_elem(t_stack *a, t_stack *b, size_t sortsize, t_count c)
{
	restore_stack(a, b, (ssize_t)c.ra, (ssize_t)c.rb);
	fromatob(c.ra + sortsize, a, b);
	frombtoa(c.rb, b, a);
	frombtoa(c.pb - c.rb, b, a);
}

void	fromatob(size_t sortsize, t_stack *a, t_stack *b)
{
	int		pivot1;
	int		pivot2;
	t_count	count;

	if (check_aissorted(a, sortsize))
		return ;
	if (find_pivot(a, sortsize, &pivot1, &pivot2))
		error_exit(a, b);
	init_count(&count);
	while (1)
	{
		if (pivot2 <= a->num[a->top])
		{
			if (check_biggerthan_pivot(a, sortsize, pivot2))
				break ;
			collect_bigger(a, &count);
		}
		else
			move_lessthan_pivot(a, b, &count, pivot1);
		sortsize--;
	}
	stack_elem(a, b, sortsize, count);
}
