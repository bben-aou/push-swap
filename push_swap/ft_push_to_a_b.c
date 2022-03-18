/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_to_a_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 01:50:14 by bben-aou          #+#    #+#             */
/*   Updated: 2022/03/15 08:49:04 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_a(t_stack *stack, int value, int size)
{
	if (stack->top_a >= size)
		return (INT_MIN);
	stack->top_a++;
	stack->stack_a[stack->top_a] = value;
	return (INT_MAX);
}

int	push_b(t_stack *stack, int value, int size)
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

int	push_to_stack_a(t_stack *stack, int *str, int len)
{
	if (stack->top_a >= len)
		return (INT_MIN);
	while (stack->top_a < len)
	{
		stack->top_a++;
		stack->stack_a[stack->top_a] = str[stack->top_a];
	}
	return (INT_MAX);
}
