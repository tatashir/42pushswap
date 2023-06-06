/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_exit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:55:05 by tatashir          #+#    #+#             */
/*   Updated: 2023/06/06 23:26:42 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	error_exit(t_stack *a, t_stack *b)
{
	ft_putendl_fd("Error", 2);
	free(a->num);
	free(b->num);
	exit(1);
}
