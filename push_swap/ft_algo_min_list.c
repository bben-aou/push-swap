/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_min_list.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 05:32:24 by bben-aou          #+#    #+#             */
/*   Updated: 2022/03/18 15:31:48 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_tree_numbers(t_stack *stack)
{
	if ((stack->stack_a[0] > stack->stack_a[1]) && (stack->stack_a[1]
			< stack->stack_a[2]) && (stack->stack_a[0] < stack->stack_a[2]))
		sa(stack, 1);
	else if ((stack->stack_a[0] > stack->stack_a[1]) && (stack->stack_a[1]
			> stack->stack_a[2]) && (stack->stack_a[0] > stack->stack_a[2]))
	{
		ra(stack, 1);
		sa(stack, 1);
	}
	else if ((stack->stack_a[0] < stack->stack_a[1]) && (stack->stack_a[1]
			> stack->stack_a[2]) && (stack->stack_a[0] < stack->stack_a[2]))
	{
		sa(stack, 1);
		ra(stack, 1);
	}
	else if ((stack->stack_a[0] < stack->stack_a[1]) && (stack->stack_a[1]
			> stack->stack_a[2]) && (stack->stack_a[0] > stack->stack_a[2]))
		rra(stack, 1);
	else if ((stack->stack_a[0] > stack->stack_a[1]) && (stack->stack_a[1]
			< stack->stack_a[2]) && (stack->stack_a[0] > stack->stack_a[2]))
		ra(stack, 1);
}

void	pushing_max_and_min_to_b(t_stack *stack, int argc)
{
	int	max;
	int	min;
	int	i;

	max = get_max(stack);
	min = get_min(stack);
	i = 0;
	while (stack->top_a > 3)
	{
		if (stack->stack_a[i] == max || stack->stack_a[i] == min)
			pb(stack, argc, 1);
		else
			ra(stack, 1);
	}
}

void	algo_five_numbers(t_stack *stack, int argc)
{
	int	i;

	i = 0;
	pushing_max_and_min_to_b(stack, argc);
	algo_tree_numbers(stack);
	while (i < 2)
	{
		if (stack->stack_b[0] > stack->stack_a[0])
		{
			pa(stack, 1);
			ra(stack, 1);
		}
		else
			pa(stack, 1);
		i++;
	}
}
