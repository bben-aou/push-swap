/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:10:32 by bben-aou          #+#    #+#             */
/*   Updated: 2022/03/18 17:38:14 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	read_arguments(t_stack *stack, int argc)
{
	char	*arg;

	arg = get_next_line(0);
	while (arg)
	{
		execute_instruction(stack, argc, arg);
		free(arg);
		arg = get_next_line(0);
	}
	free(arg);
}

void	avoid_leaks_b(t_stack *stack, char **argv)
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

static void	read_and_check(t_stack *stack, int *number_array, int argc)
{
	init_b(stack, argc);
	push_to_stack_a(stack, number_array, argc);
	read_arguments(stack, argc);
}

static int	check_sorted_stack(t_stack *stack, int argc)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < argc - 1)
	{
		j = i + 1;
		if (stack->stack_a[i] < stack->stack_a[j])
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_stack	stack;
	int		i;
	int		*number_array;

	if (argc < 2)
		exit(1);
	i = 0;
	argv = check_errors(argv, argc, &stack);
	while (argv[i])
		i++;
	argc = i;
	number_array = malloc(sizeof(int) * argc);
	number_array = convert(argv, argc, &stack);
	check_double(number_array, argc);
	if (check_sorted(number_array, argc) == 1)
	{
		free(number_array);
		exit(0);
	}
	read_and_check(&stack, number_array, argc);
	if ((check_sorted_stack(&stack, argc) == 1) && (stack.top_b == -1))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	avoid_leaks_b(&stack, argv);
}
