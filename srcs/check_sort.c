/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 18:56:13 by tatashir          #+#    #+#             */
/*   Updated: 2023/06/07 18:52:44 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

bool	check_sort(t_stack *a)
{
	size_t	i;

	i = 0;
	while (i < a->top - 1)
	{
		if (a->num[a->top - (i + 1)] < a->num[a->top - i])
			return (false);
		i++;
	}
	return (true);
}

bool	check_aissorted(t_stack *s, size_t sortsize)
{
	size_t	i;

	if (sortsize <= 3)
	{
		sort_stack_a(sortsize, s);
		return (true);
	}
	i = 0;
	while (i < sortsize - 1)
	{
		if (s->num[s->top - (i + 1)] < s->num[s->top - i])
			return (false);
		i++;
	}
	return (true);
}

static void	pushto_a(t_stack *b, t_stack *a, size_t pushsize)
{
	while (0 < pushsize)
	{
		push(a, b, "pa");
		pushsize--;
	}
}

bool	check_b_issorted(t_stack *a, t_stack *b, size_t sortsize)
{
	size_t	i;

	if (sortsize <= 3)
	{
		sort_stackbtoa(sortsize, b, a);
		return (true);
	}
	i = 0;
	while (i < sortsize - 1)
	{
		if (b->num[b->top - i] < b->num[b->top - (i + 1)])
			return (false);
		i++;
	}
	pushto_a(b, a, sortsize);
	return (true);
}
