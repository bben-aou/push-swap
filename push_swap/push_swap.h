/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:52:06 by bben-aou          #+#    #+#             */
/*   Updated: 2022/03/18 15:33:53 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "./libft.h"
# include <stdbool.h>

typedef struct s_stacks
{
	int		*stack_a;
	int		*stack_b;
	int		top_a;
	int		top_b;
	int		pa_i;
	int		*sorted_array;
	int		*str;
	char	**tab_2;
}	t_stack;

void	init(t_stack *stack, int argc);
void	reverse_stack_a(t_stack *stack, int len);
void	reverse_stack_b(t_stack *stack, int len);
int		push_a(t_stack *stack, int value, int size);
int		push_b(t_stack *stack, int value, int size);
int		push_to_stack_a(t_stack *stack, int *str, int argc);
char	**parcing(char **argv, int argc, t_stack *stack);
void	message_error(void);
int		check_numbers(char *str);
char	**check_errors(char **argv, int argc, t_stack *stack);
void	ss(t_stack *stack, int status);
void	rr(t_stack *stack, int status);
void	rrr(t_stack *stack, int status);
void	sb(t_stack *stack, int status);
void	rb(t_stack *stack, int status);
void	rrb(t_stack *stack, int status);
void	pb(t_stack *stack, int argc, int status);
void	sa(t_stack *stack, int status);
void	ra(t_stack *stack, int status);
void	rra(t_stack *stack, int status);
void	pa(t_stack *stack, int status);
int		get_max_2(t_stack *stack);
int		get_index_of_max_on_b(t_stack *stack);
void	sort_array(t_stack *stack);
void	copy_stack_to_array(t_stack *stack);
int		*convert(char **tab, int argc, t_stack *stack);
int		check_sorted(int *str, int argc);
void	check_double(int *str, int argc);
void	quick_check(t_stack *stack, int max);
void	chose_best_move_b(t_stack *stack, int max_index);
void	chose_the_top_to_pus_in_b(t_stack *stack);
void	check_cases(t_stack *stack, int first_pvt, int second_pvt, int argc);
void	algo(t_stack *stack, int argc, int div);
void	algo_p2(t_stack *stack, int argc);
int		push_to_b(t_stack *stack, int value, int size);
void	algo_tree_numbers(t_stack *stack);
void	pushing_max_and_min_to_b(t_stack *stack, int argc);
void	algo_five_numbers(t_stack *stack, int argc);
int		get_max(t_stack *stack);
int		get_index_of_max_on_a(t_stack *stack);
int		get_min(t_stack *stack);
int		get_index_of_min_on_a(t_stack *stack);
void	avoid_leaks(t_stack *stack, char **argv);
void	cases_algo(t_stack *stack, int argc);
#endif
