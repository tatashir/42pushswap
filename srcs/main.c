/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:36:44 by tatashir          #+#    #+#             */
/*   Updated: 2023/06/08 18:26:48 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;	

	if (!check_arg(argc, argv))
	{
		ft_putendl_fd("Error", 1);
		exit (1);
	}
	if (init_stack(&a, &b, argc, argv))
	{
		ft_putendl_fd("Error", 2);
		exit (1);
	}
	sort(argc - 1, &a, &b);
	free(a.num);
	free(b.num);
	return (0);
}
