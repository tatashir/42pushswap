/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3elem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 17:04:01 by tatashir          #+#    #+#             */
/*   Updated: 2023/06/06 23:56:52 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_3elem(t_stack *s)
{
	size_t	n1;
	size_t	n2;
	size_t	n3;

	n1 = s->top;
	n2 = s->top - 1;
	n3 = s->top - 2;
	if (check_3sort(s->num[n3], s->num[n1], s->num[n2]))
		rrotate(s, "rra");
	else if (check_3sort(s->num[n2], s->num[n1], s->num[n3]))
		swap(&s->num[n1], &s->num[n2], "sa");
	else if (check_3sort(s->num[n2], s->num[n3], s->num[n1]))
		rotate(s, "ra");
	else if (check_3sort(s->num[n3], s->num[n2], s->num[n1]))
	{
		swap(&s->num[n1], &s->num[n2], "sa");
		rrotate(s, "rra");
	}
	else if (check_3sort(s->num[n1], s->num[n3], s->num[n2]))
	{
		swap(&s->num[n1], &s->num[n2], "sa");
		rotate(s, "ra");
	}
}

void	atob_sort3case(t_stack *s)
{
	size_t	n1;
	size_t	n2;
	size_t	n3;

	n1 = s->top;
	n2 = s->top - 1;
	n3 = s->top - 2;
	if (check_3sort(s->num[n3], s->num[n1], s->num[n2]))
		atob_case1(s, n1, n2);
	else if (check_3sort(s->num[n2], s->num[n1], s->num[n3]))
		atob_case2(s, n1, n2);
	else if (check_3sort(s->num[n2], s->num[n3], s->num[n1]))
		atob_case3(s, n1, n2);
	else if (check_3sort(s->num[n3], s->num[n2], s->num[n1]))
		atob_case4(s, n1, n2);
	else if (check_3sort(s->num[n1], s->num[n3], s->num[n2]))
		atob_case5(s, n1, n2);
}

void	btoa_sort3case(t_stack *b, t_stack *a)
{
	size_t	n1;
	size_t	n2;
	size_t	n3;

	n1 = b->top;
	n2 = b->top - 1;
	n3 = b->top - 2;
	if (check_3sort(b->num[n3], b->num[n1], b->num[n2]))
		btoa_case1(b, a, n1, n2);
	else if (check_3sort(b->num[n2], b->num[n1], b->num[n3]))
		btoa_case2(b, a, n1, n2);
	else if (check_3sort(b->num[n2], b->num[n3], b->num[n1]))
		btoa_case3(b, a, n1, n2);
	else if (check_3sort(b->num[n1], b->num[n2], b->num[n3]))
		btoa_case4(b, a, n1, n2);
	else if (check_3sort(b->num[n1], b->num[n3], b->num[n2]))
		btoa_case5(b, a);
	else if (check_3sort(b->num[n3], b->num[n2], b->num[n1]))
		btoa_case6(b, a);
}
