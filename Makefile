# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/03 14:18:21 by cammapou          #+#    #+#              #
#    Updated: 2018/06/14 13:11:56 by cammapou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_P = push_swap

NAME_C = checker

SRC_P = srcs_pushswap/main_push.c \
		src_common/ft_lst_init.c \
		instruction/ft_instruction1.c \
		instruction/ft_instruction2.c \
		srcs_pushswap/ft_algomin.c \
		srcs_pushswap/ft_pushswap.c \
		srcs_pushswap/ft_toolstack.c \
		srcs_pushswap/toolstack2.c \
		ft_algo.c \
		srcs_checker/checker.c \
		srcs_pushswap/algo_min.c \
		src_common/ft_error.c

OBJ_P = $(SRC_P:.c=.o)

SRC_C = srcs_checker/main_check.c \
		srcs_checker/checker.c \
		instruction/ft_instruction1.c \
		instruction/ft_instruction2.c \
		src_common/ft_lst_init.c \
		src_common/ft_error.c

OBJ_C = $(SRC_C:.c=.o)

LIB = libft/libft.a \
		printf/libftprintf.a

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

all: $(NAME_C) $(NAME_P)

 $(NAME_C): $(LIB) $(OBJ_C)
	@$(CC) $(OBJ_C) -o $(NAME_C) $(LIB)

 $(NAME_P): $(LIB) $(OBJ_P)
	@$(CC) $(CFLAGS) $(OBJ_P) -o $(NAME_P) $(LIB)
	@echo "\033[32m[ 100% ]\033[0m Compiling [ $(NAME_P) & $(NAME_C) ]" $(OK)

$(LIB):
	@make -C libft
	@make -C printf
clean:
	@make clean -s -C $(LIBFT)
	@make clean -s -C $(PRINTF)
	@$(RM) $(OBJ_P)
	@$(RM) $(OBJ_C)
	@echo "\033[32m[ Delete ]\033[0m [ objs /$(NAME_P) /$(NAME_C) ]" $(OK)

fclean:
	@make fclean -s -C $(LIBFT)
	@make fclean -s -C $(PRINTF)
	@$(RM) $(OBJ_P)
	@$(RM) $(OBJ_C)
	@$(RM) $(NAME_C)
	@$(RM) $(NAME_P)
	@echo "\033[32m[ Delete ]\033[0m [ objs & $(NAME_P) $(NAME_C) ]" $(OK)

re:fclean all
