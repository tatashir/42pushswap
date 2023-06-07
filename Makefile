# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/24 19:19:29 by tatashir          #+#    #+#              #
#    Updated: 2023/06/07 20:23:16 by tatashir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

SRCS	=	./srcs/main.c\
		./srcs/cmd_count.c\
		./srcs/fromAtoB.c\
		./srcs/fromBtoA.c\
		./srcs/restore_stack.c\
		./srcs/sort_smallsize.c\
		./srcs/find_pivot.c\
		./srcs/atob_case1.c\
		./srcs/atob_case2.c\
		./srcs/atob_case3.c\
		./srcs/atob_case4.c\
		./srcs/atob_case5.c\
		./srcs/btoa_case1.c\
		./srcs/btoa_case2.c\
		./srcs/btoa_case3.c\
		./srcs/btoa_case4.c\
		./srcs/btoa_case5.c\
		./srcs/btoa_case6.c\
		./srcs/error_exit.c\
		./srcs/check_3sort.c\
		./srcs/check_arg.c\
		./srcs/check_sort.c\
		./srcs/cmd_push.c\
		./srcs/cmd_rotate.c\
		./srcs/cmd_swap.c\
		./srcs/get_min.c\
		./srcs/init_stack.c\
		./srcs/sort.c\
		./srcs/sort_3elem.c\
		#./srcs/swap.c\

OBJS =$(SRCS:.c=.o)

LIBFT = libft

LIBFT_A = libft/libft.a

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

COMPILING_MSG = @echo "Compiling $<..."

.SILENT:

$(NAME):	$(OBJS)	$(LIBFT_A)
			$(CC) $^ -o $@

$(LIBFT_A):
			make -C	$(LIBFT)

all:		$(NAME)

.c.o:
			$(CC)	$(CFLAGS) -c $< -o $@

clean:
			$(RM)	$(OBJS)
			make -C	$(LIBFT) clean

fclean:		clean
			$(RM)	$(NAME)
			make -C	$(LIBFT) fclean

re:			fclean all

.PHONY:		all clean fclean re
