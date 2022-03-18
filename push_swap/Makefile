# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/18 15:09:24 by bben-aou          #+#    #+#              #
#    Updated: 2022/03/18 16:55:34 by bben-aou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap

BONUS = checker

CFLAGS = -Wall -Wextra -Werror

src = ft_algo_min_list.c \
	  ft_algo_part_2.c \
	  ft_algo.c \
	  ft_atoi.c \
	  ft_check_double.c \
	  ft_check_sorted.c \
	  ft_convert.c \
	  ft_helper_functions_1.c \
	  ft_helper_functions_2.c \
	  ft_instructions_a.c \
	  ft_instructions_b.c \
	  ft_instructions_common.c \
	  ft_isdigit.c \
	  ft_parcing.c \
	  ft_push_to_a_b.c \
	  ft_putstr_fd.c \
	  ft_reverse_stack.c \
	  ft_split.c \
	  ft_strjoin.c \
	  ft_strlen.c \
	  push_swap.c \

src_2 = ft_atoi.c \
	  ft_check_double.c \
	  ft_check_sorted.c \
	  ft_convert.c \
	  ft_helper_functions_1.c \
	  ft_helper_functions_2.c \
	  ft_instructions_a.c \
	  ft_instructions_b.c \
	  ft_instructions_common.c \
	  ft_isdigit.c \
	  ft_parcing.c \
	  ft_push_to_a_b.c \
	  ft_putstr_fd.c \
	  ft_reverse_stack.c \
	  ft_split.c \
	  ft_strjoin.c \
	  ft_strlen.c \

src_b =	checker.c \
		ft_utils.c \
		../get_next_line/get_next_line.c\
		../get_next_line/get_next_line_utils.c\


HDRS = ./push_swap.h \
		./checker.h \


OBJ = $(src:.c=.o)
OBJB = $(src_b:.c=.o)
OBJ_2 = $(src_2:.c=.o)


all : $(NAME)

$(NAME): $(OBJ)
	@gcc $(CFLAGS) $^ -o $@
	@echo "\033[1;32m##########COMPILED SUCCESSFULY##########\033[0m"

bonus : $(OBJB) $(OBJ_2)
	@gcc $(CFLAGS) $(OBJB) $(OBJ_2) -o $(BONUS)
	@echo "\033[1;32m##########BONUS COMPILED SUCCESSFULY##########\033[0m"
	
%.o: %.c $(HDRS)
	@gcc $(CFLAGS) -c $< -o $@ 

clean:
	@rm -f $(OBJ)
	@rm -f $(OBJ_2)
	@rm -f $(OBJB)
fclean: clean
	@rm -f $(NAME)
	@rm -f $(BONUS)
	@echo "\033[1;32m##########CLEANED SUCCESSFULY##########\033[0m"

re: fclean all