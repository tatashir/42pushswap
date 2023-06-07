/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:48:26 by tatashir          #+#    #+#             */
/*   Updated: 2023/06/07 15:49:18 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate(t_stack *s, char *m)
{
	int		tmp;
	size_t	i;

	tmp = s->num[s->top];
	i = 0;
	while (0 < s->top - i)
	{
		s->num[s->top - i] = s->num[s->top - i - 1];
		i++;
	}
	s->num[1] = tmp;
	if (ft_strncmp(m, "rr", 2))
		ft_putendl_fd(m, 1);
}

void	rrotate(t_stack *s, char *m)
{
	int		tmp;
	size_t	i;

	tmp = s->num[1];
	i = 1;
	while (i < s->top)
	{
		s->num[i] = s->num[i + 1];
		i++;
	}
	s->num[s->top] = tmp;
	if (ft_strncmp(m, "rrr", 3))
		ft_putendl_fd(m, 1);
}

void	rotate_ab(t_stack *a, t_stack *b)
{
	rotate(a, "rr");
	rotate(b, "rr");
	ft_putendl_fd("rr", 1);
}

void	rrotate_ab(t_stack *a, t_stack *b)
{
	rrotate(a, "rrr");
	rrotate(b, "rrr");
	ft_putendl_fd("rrr", 1);
}
