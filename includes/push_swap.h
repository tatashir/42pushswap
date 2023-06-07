/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:26:23 by tatashir          #+#    #+#             */
/*   Updated: 2023/06/07 20:20:06 by tatashir         ###   ########.fr       */
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
	// size_t	rra;
	// size_t	rrb;
	// size_t	rr;
	// size_t	rrr;
	// size_t	sa;
	// size_t	sb;
	// size_t	ss;

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

// check_3sort
bool	check_3sort(int s, int m, int l);

// check_arg
bool	check_arg(int argc, char **argv);

// check_sort
bool	check_sort(t_stack *a);
bool	check_aissorted(t_stack *s, size_t size);

//static void	pushtoA(t_stack *a, t_stack *b, size_t pushsize);
bool	check_b_issorted(t_stack *a, t_stack *b, size_t size);

//cmd
void	push(t_stack *a, t_stack *b, char *m);
void	rotate(t_stack *s, char *m);
void	rrotate(t_stack *s, char *m);
void	rotate_ab(t_stack *a, t_stack *b);
void	rrotate_ab(t_stack *a, t_stack *b);
void	swap(int *n1, int *n2, char *m);
void	swap_ab(t_stack *a, t_stack *b);

// cmdcount
void	cmd_count(t_count *c);

// errorexit
int		error_exit(t_stack *a, t_stack *b);

// findpivot
//static void	swap_lr(int *l, int *r);
//static void	quick_sort(int *n, ssize_t l, ssize_t r);
int		find_pivot(t_stack *s, size_t size, int *pivot1, int *pivot2);

// fromatob
void	fromatob(size_t size, t_stack *a, t_stack *b);

// frombtoa
void	frombtoa(size_t size, t_stack *a, t_stack *b);

// getmin
size_t	get_min(t_stack *a);

//command_count
void	command_count(t_count *c);

// initstack

int		init_stack(t_stack *stack_a, t_stack *stack_b, int argc, char **argv);

//restore_stack
void	restore_stack(t_stack *a, t_stack *b, ssize_t countra, ssize_t countrb);

// sort3elem
void	sort_3elem(t_stack *a);
void	atob_sort3case(t_stack *s);
void	btoa_sort3case(t_stack *a, t_stack *b);

// sortsmall
void	sort_stack_a(size_t size, t_stack *stack);
void	sort_stackbtoa(size_t size, t_stack *a, t_stack *b);

// sort
//static void	sort_under3(int args, t_stack *a);
//static void	sort_under6(t_stack *a, t_stack *b);
//static void sort_large(int size, t_stack *a, t_stack *b);
void	sort(int num, t_stack *a, t_stack *b);

// swap
//void	swap(int *n1, int *n2);

#endif