# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/08 15:58:34 by tkirihar          #+#    #+#              #
#    Updated: 2023/06/07 15:58:47 by tatashir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	push_swap

SRCS = 	./srcs/main.c \
		./srcs/get_min.c \
		./srcs/atob_case1.c\
		./srcs/atob_case2.c\
		./srcs/atob_case3.c\
		./srcs/atob_case4.c\
		./srcs/atob_case5.c\
		./srcs/A_to_B.c \
		./srcs/B_to_A.c \
		./srcs/btoa_case1.c\
		./srcs/btoa_case2.c\
		./srcs/btoa_case3.c\
		./srcs/btoa_case4.c\
		./srcs/btoa_case5.c\
		./srcs/btoa_case6.c\
		./srcs/check_arg.c \
		./srcs/check_sort.c \
		./srcs/check_3sort.c \
		./srcs/cmd_push.c \
		./srcs/cmd_rotate.c \
		./srcs/cmd_swap.c \
		./srcs/error_exit.c \
		./srcs/init_count.c \
		./srcs/init_stack.c \
		./srcs/restore_stack.c \
		./srcs/search_pivot.c \
		./srcs/short_sort.c \
		./srcs/sort.c \
		./srcs/sort_3elem.c

OBJS = 		$(SRCS:.c=.o)

LIBFT = 	libft

LIBFT_A = 	./libft/libft.a

CC =		gcc

RM =		rm -f

CFLAGS =	-Wall -Wextra -Werror

.SILENT:

$(NAME):	$(OBJS) $(LIBFT_A)
			$(CC) $^ -o $@

$(LIBFT_A):
			make -C $(LIBFT)

all:		$(NAME)

.c.o:
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)
			make -C $(LIBFT) clean

fclean:		clean
			$(RM) $(NAME)
			make -C $(LIBFT) fclean

re:			fclean all

.PHONY:		all clean fclean re