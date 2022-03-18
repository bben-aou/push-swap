/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:53:23 by bben-aou          #+#    #+#             */
/*   Updated: 2022/03/18 16:35:55 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(t_stack *stack, int argc)
{
	stack->stack_a = malloc(sizeof(int) * argc);
	if (!(stack->stack_a))
		write(1, "allocation stack A failed!\n", 27);
	stack->stack_b = malloc(sizeof(int) * argc);
	if (!(stack->stack_b))
		write(1, "allocation stack B failed!\n", 27);
	stack->top_a = -1;
	stack->top_b = -1;
	stack->pa_i = 0;
}

void	avoid_leaks(t_stack *stack, char **argv)
{
	int	i;

	i = 0;
	free(stack->stack_a);
	free(stack->stack_b);
	i = 0;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
}

void	cases_algo(t_stack *stack, int argc)
{
	if (argc == 3)
		algo_tree_numbers(stack);
	else if (argc == 5)
		algo_five_numbers(stack, argc);
	else if (argc <= 100)
		algo(stack, argc, 3);
	else if (argc >= 500)
		algo(stack, argc, 5);
}

int	main(int argc, char **argv)
{
	t_stack	stack;
	int		i;
	int		*number_array;

	argv = check_errors(argv, argc, &stack);
	if (argc == 1)
		exit(0);
	i = 0;
	while (argv[i])
		i++;
	argc = i;
	number_array = convert(argv, argc, &stack);
	check_double(number_array, argc);
	if (check_sorted(number_array, argc) == 1)
		exit(0);
	init(&stack, argc);
	push_to_stack_a(&stack, number_array, argc);
	free(number_array);
	cases_algo(&stack, argc);
	avoid_leaks(&stack, argv);
}
