# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/03 14:18:21 by cammapou          #+#    #+#              #
#    Updated: 2018/07/18 15:13:08 by cammapou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_C	=	checker

SRC_C	=	srcs_checker/main_check.c \
			srcs_checker/checker.c \
			srcs_common/instructions1.c \
			srcs_common/instructions2.c \
			srcs_common/instructions3.c \
			srcs_pushswap/tools_sort2.c \
			srcs_pushswap/ft_error.c
OBJ_C	=	$(SRC_C:.c=.o)

NAME_P	=	push_swap

SRC_P	=	srcs_pushswap/main_push.c \
			srcs_pushswap/ft_error.c \
			srcs_pushswap/tools_sort1.c \
			srcs_pushswap/tools_sort2.c \
			srcs_pushswap/algo_min.c \
			srcs_pushswap/algo_med.c \
			srcs_pushswap/sort1.c \
			srcs_pushswap/sort2.c \
			srcs_pushswap/define_med.c \
			srcs_common/instructions1.c \
			srcs_common/instructions2.c \
			srcs_common/instructions3.c

OBJ_P	=	$(SRC_P:.c=.o)

LIBS	=	libft/libft.a \
				printf/libftprintf.a
RM		=	rm -f
FLAGS	=	-Wall -Wextra -Werror
LIBFT = libft
PRINTF = printf

HEADER = -I includes
CC = gcc
RM = rm -rf
OK = $(C_OK)OK$(C_NO)

C_NO = "\033[00m"
C_OK = "\033[35m"
C_GOOD = "\033[32m"
C_ERROR = "\033[31m"
C_WARN = "\033[33m"

.PHONY: all clean fclean re

all		:	$(NAME_C) $(NAME_P) $(LIBS)

$(NAME_C)	:	$(OBJ_C) $(LIBS)
	@$(CC) $(OBJ_C) $(FLAGS) -o $(NAME_C) $(LIBS)

$(NAME_P)	:	$(OBJ_P) $(LIBS)
	@$(CC) $(OBJ_P) $(FLAGS) -o $(NAME_P) $(LIBS)

$(LIBS)	:
	@make -C libft
	@make -C printf

clean	:
	@make clean -s -C $(LIBFT)
	@make clean -s -C $(PRINTF)
	@$(RM) $(OBJ_P)
	@$(RM) $(OBJ_C)
	@echo "\033[32m[ Delete ]\033[0m [ objs /$(NAME_P) /$(NAME_C) ]" $(OK)

fclean	:	clean
	@make fclean -s -C $(LIBFT)
	@make fclean -s -C $(PRINTF)
	@$(RM) $(OBJ_P)
	@$(RM) $(OBJ_C)
	@$(RM) $(NAME_C)
	@$(RM) $(NAME_P)
	@echo "\033[32m[ Delete ]\033[0m [ objs & $(NAME_P) $(NAME_C) ]" $(OK)

re:	fclean all
