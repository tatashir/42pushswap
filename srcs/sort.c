/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 13:53:39 by tatashir          #+#    #+#             */
/*   Updated: 2023/06/07 19:47:05 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	sort_under3(int sortsize, t_stack *a)
{
	if (sortsize == 1)
		;
	else if (sortsize == 2)
	{
		if (a->num[a->top] > a->num[a->top - 1])
			swap(&a->num[a->top], &a->num[a->top - 1], "sa");
	}
	else
		sort_3elem(a);
}

static void	sort_under6(t_stack *a, t_stack *b)
{
	size_t	min;

	if (check_sort(a))
		return ;
	while (a->top > 3)
	{
		min = get_min(a);
		while (min != a->top)
		{
			rotate(a, "ra");
			min++;
		}
		push(b, a, "pb");
	}
	sort_3elem(a);
	while (0 < b->top)
		push(a, b, "pa");
}

static void	sort_large(int sortsize, t_stack *a, t_stack *b)
{
	A_to_B((size_t)sortsize, a, b);
}

void	sort(int sortsize, t_stack *a, t_stack *b)
{
	if (sortsize <= 3)
		sort_under3(sortsize, a);
	else if (sortsize <= 6)
		sort_under6(a, b);
	else
		sort_large(sortsize, a, b);
}
