# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/08 15:58:34 by tkirihar          #+#    #+#              #
#    Updated: 2023/06/06 23:06:16 by tatashir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		push_swap

SRCS = 	./srcs/main.c \
		./srcs/atob_case1.c\
		./srcs/atob_case2.c\
		./srcs/atob_case3.c\
		./srcs/atob_case4.c\
		./srcs/atob_case5.c\
		./srcs/A_to_B.c \
		./srcs/B_to_A.c \
		./srcs/B_to_A_command_case1~5.c \
		./srcs/B_to_A_command_case6.c \
		./srcs/check_arg.c \
		./srcs/check_sort.c \
		./srcs/check_three_sort.c \
		./srcs/command_push.c \
		./srcs/command_rotate.c \
		./srcs/command_swap.c \
		./srcs/finish_error.c \
		./srcs/init_count.c \
		./srcs/init_stack.c \
		./srcs/reset_stack.c \
		./srcs/search_min.c \
		./srcs/search_pivot.c \
		./srcs/short_sort.c \
		./srcs/sort.c \
		./srcs/three_sort.c

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