/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:14:28 by tatashir          #+#    #+#             */
/*   Updated: 2023/06/07 15:30:54 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

size_t	get_min(t_stack *a)
{
	size_t	min;
	size_t	i;

	min = 1;
	i = 2;
	while (i <= a->top)
	{
		if (a->num[min] > a->num[i])
			min = i;
		i++;
	}
	return (min);
}
