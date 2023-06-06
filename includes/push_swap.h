/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:58:28 by tkirihar          #+#    #+#             */
/*   Updated: 2023/06/06 23:23:40 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <stdio.h>
# include "../libft/libft.h"

typedef struct s_stack
{
	int		*num;
	size_t	top;
}	t_stack;

typedef struct s_count
{
	size_t	ra;
	size_t	rb;
	size_t	pa;
	size_t	pb;
}	t_count;

/* check_arg */

bool	check_arg(int ac, char **av);

/* init_stack */

int		init_stack(t_stack *stack_a, t_stack *stack_b, int ac, char **av);

/* sort */

void	sort(int sort_size, t_stack *stack_a, t_stack *stack_b);

/* three_sort */

void	three_sort(t_stack *stack);
void	three_sort_A_to_B(t_stack *stack);
void	three_sort_B_to_A(t_stack *stack_b, t_stack *stack_a);

/* check_three_sort */

bool	check_three_sort(int small, int medium, int large);

/* search_min */

size_t	search_min(t_stack *stack);

/* A_to_B */

void	A_to_B(size_t sort_size, t_stack *stack_a, t_stack *stack_b);

// atob,btoa
void	atob_case1(t_stack *s, size_t n1, size_t n2);
void	atob_case2(t_stack *s, size_t n1, size_t n2);
void	atob_case3(t_stack *s, size_t n1, size_t n2);
void	atob_case4(t_stack *s, size_t n1, size_t n2);
void	atob_case5(t_stack *s, size_t n1, size_t n2);
void	btoa_case1(t_stack *b, t_stack *a, size_t n1, size_t n2);
void	btoa_case2(t_stack *b, t_stack *a, size_t n1, size_t n2);
void	btoa_case3(t_stack *b, t_stack *a, size_t n1, size_t n2);
void	btoa_case4(t_stack *b, t_stack *a, size_t n1, size_t n2);
void	btoa_case5(t_stack *b, t_stack *a);
void	btoa_case6(t_stack *b, t_stack *a);

/* B_to_A */

void	B_to_A(size_t sort_size, t_stack *stack_b, t_stack *stack_a);

/* short_sort */

void	short_sort_A_to_B(size_t sort_size, t_stack *stack_a);
void	short_sort_B_to_A(size_t sort_size, t_stack *stack_b, t_stack *stack_a);

/* check_sort */

bool	check_sort(t_stack *stack);
bool	check_sort_A_to_B(t_stack *stack, size_t sort_size);
bool	check_sort_B_to_A(t_stack *stack_a, t_stack *stack_b, size_t sort_size);

/* reset_stack */

void	reset_stack(t_stack *stack_a, t_stack *stack_b, \
		ssize_t count_ra, ssize_t count_rb);

/* init_count */

void	init_count(t_count *count);

/* search_median */

int		search_pivot(t_stack *stack, size_t sort_size, \
int *pivot1, int *pivot2);

/* command_swap */

void	swap(int *n1, int *n2, char *message);
void	swap_ab(t_stack *stack_a, t_stack *stack_b);

/* command_push */

void	push(t_stack *push_stack, t_stack *pop_stack, char *message);

/* command_rotate */

void	rotate(t_stack *stack, char *message);
void	rrotate(t_stack *stack, char *message);
void	rotate_ab(t_stack *stack_a, t_stack *stack_b);
void	rrotate_ab(t_stack *stack_a, t_stack *stack_b);

// errorexit
int		error_exit(t_stack *a, t_stack *b);

#endif
