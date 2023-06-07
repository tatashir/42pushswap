/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:32:23 by tatashir          #+#    #+#             */
/*   Updated: 2023/06/07 15:36:45 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static bool	check_dup(int n, int *nlist, size_t listsize)
{
	size_t	i;

	i = 1;
	while (i < listsize)
	{
		if (n == nlist[i])
			return (true);
		i++;
	}
	return (false);
}

int	init_stack(t_stack *stack_a, t_stack *stack_b, int argc, char **argv)
{
	size_t	i;
	size_t	j;
	int		tmp;

	stack_a->num = (int *)malloc(sizeof(int) * argc);
	if (stack_a->num == NULL)
		return (1);
	stack_b->num = (int *)malloc(sizeof(int) * argc);
	if (stack_b->num == NULL)
	{
		free(stack_a->num);
		return (1);
	}
	stack_a->top = argc - 1;
	stack_b->top = 0;
	i = 1;
	j = argc - 1;
	while (i <= (size_t)argc - 1)
	{
		tmp = ft_atoi(argv[j--]);
		if (check_dup(tmp, stack_a->num, i))
			return (1);
		stack_a->num[i++] = tmp;
	}
	return (0);
}
