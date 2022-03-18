/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper_functions_2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 20:25:14 by bben-aou          #+#    #+#             */
/*   Updated: 2022/03/15 08:41:44 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max(t_stack *stack)
{
	int	i;
	int	max;

	i = 0;
	max = stack->stack_a[0];
	while (i < stack->top_a)
	{
		if (stack->stack_a[i] > max)
			max = stack->stack_a[i];
		i++;
	}
	return (max);
}

int	get_index_of_max_on_a(t_stack *stack)
{
	int	i;
	int	max;
	int	pos_max;

	i = 0;
	max = stack->stack_a[0];
	while (i < stack->top_a)
	{
		if (stack->stack_a[i] >= max)
		{
			max = stack->stack_a[i];
			pos_max = i;
		}
		i++;
	}
	return (pos_max);
}

int	get_min(t_stack *stack)
{
	int	i;
	int	min;

	i = 0;
	min = stack->stack_a[0];
	while (i < stack->top_a)
	{
		if (stack->stack_a[i] < min)
			min = stack->stack_a[i];
		i++;
	}
	return (min);
}

int	get_index_of_min_on_a(t_stack *stack)
{
	int	i;
	int	min;
	int	pos_min;

	i = 0;
	min = stack->stack_a[0];
	while (i < stack->top_a)
	{
		if (stack->stack_a[i] <= min)
		{
			min = stack->stack_a[i];
			pos_min = i;
		}
		i++;
	}
	return (pos_min);
}
