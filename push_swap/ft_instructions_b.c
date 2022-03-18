/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instructions_b.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 01:45:53 by bben-aou          #+#    #+#             */
/*   Updated: 2022/03/17 08:25:51 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_stack *stack, int status)
{
	int	temp;
	int	i;

	i = 0;
	temp = stack->stack_b[i];
	stack->stack_b[i] = stack->stack_b[i + 1];
	stack->stack_b[i + 1] = temp;
	if (status == 1)
		write(1, "sb\n", 3);
}

void	rb(t_stack *stack, int status)
{
	int	i;
	int	temp;

	temp = stack->stack_b[0];
	i = 1;
	while (i < stack-> top_b + 1)
	{
		stack->stack_b[i - 1] = stack->stack_b[i];
		i++;
	}
	stack->stack_b[stack->top_b] = temp;
	if (status == 1)
		write(1, "rb\n", 3);
}

void	rrb(t_stack *stack, int status)
{
	int	i;
	int	temp;

	temp = stack->stack_b[stack->top_b];
	i = stack->top_b;
	while (i > 0)
	{
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	stack->stack_b[0] = temp;
	if (status == 1)
		write(1, "rrb\n", 4);
}

int	push_to_b(t_stack *stack, int value, int size)
{
	int	i;
	int	temp;

	i = 0;
	if (stack->top_b >= size)
		return (INT_MIN);
	stack->top_b++;
	stack->stack_b[stack->top_b] = value;
	if (stack->pa_i == 1)
		reverse_stack_b(stack, 1);
	temp = stack->stack_b[stack->top_b];
	i = stack->top_b;
	while (i > 0)
	{
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	stack->stack_b[0] = temp;
	return (INT_MAX);
}

void	pb(t_stack *stack, int argc, int status)
{
	int	i;

	i = 0;
	push_to_b(stack, stack->stack_a[0], argc);
	while (i < argc)
	{
		stack->stack_a[i] = stack->stack_a[i + 1];
		i++;
	}
	stack->top_a--;
	stack->pa_i++;
	if (status == 1)
		write(1, "pb\n", 3);
}
