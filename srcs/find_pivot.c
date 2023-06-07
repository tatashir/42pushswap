/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pivot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:03:00 by tatashir          #+#    #+#             */
/*   Updated: 2023/06/07 17:03:26 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	swap_lr(int *l, int *r)
{
	int	tmp;

	tmp = *l;
	*l = *r;
	*r = tmp;
}

static void	quick_sort(int *num, ssize_t l, ssize_t r)
{
	int		pivot;
	ssize_t	i;
	ssize_t	j;

	if (r <= l)
		return ;
	pivot = num[l];
	i = 0;
	j = r;
	while (1)
	{
		while (num[i] < pivot)
			i++;
		while (pivot < num[j])
			j--;
		if (i >= j)
			break ;
		swap_lr(&(num[i]), &(num[j]));
		i++;
		j--;
	}
	quick_sort(num, l, i - 1);
	quick_sort(num, j + 1, r);
}

int	find_pivot(t_stack *s, size_t sortsize, int *pivot1, int *pivot2)
{
	int	*tmp;

	tmp = (int *)malloc(sizeof(int) * sortsize);
	if (tmp == NULL)
		return (1);
	ft_memcpy(tmp, &s->num[s->top - (sortsize - 1)], sizeof(int) * sortsize);
	quick_sort(tmp, 0, (ssize_t)sortsize - 1);
	*pivot1 = tmp[sortsize / 3];
	*pivot2 = tmp[sortsize / 3 * 2];
	free(tmp);
	return (0);
}
