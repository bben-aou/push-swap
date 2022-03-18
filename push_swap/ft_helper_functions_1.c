/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper_fucntions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 03:15:21 by bben-aou          #+#    #+#             */
/*   Updated: 2022/03/15 08:39:51 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_2(t_stack *stack)
{
	int	i;
	int	max;

	i = 0;
	max = stack->stack_b[0];
	while (i < stack->top_b + 1)
	{
		if (stack->stack_b[i] > max)
			max = stack->stack_b[i];
		i++;
	}
	return (max);
}

int	get_index_of_max_on_b(t_stack *stack)
{
	int	i;
	int	max;
	int	pos_max;

	i = 0;
	max = stack->stack_b[0];
	while (i < stack->top_b + 1)
	{
		if (stack->stack_b[i] >= max)
		{
			max = stack->stack_b[i];
			pos_max = i;
		}
		i++;
	}
	return (pos_max);
}

void	sort_array(t_stack *stack)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < stack->top_a)
	{
		j = i + 1;
		while (j < stack->top_a)
		{
			if (stack->sorted_array[i] > stack->sorted_array[j])
			{
				temp = stack->sorted_array[i];
				stack->sorted_array[i] = stack->sorted_array[j];
				stack->sorted_array[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void	copy_stack_to_array(t_stack *stack)
{
	int	i;

	i = 0;
	stack->sorted_array = malloc(sizeof(int) * stack->top_a);
	while (i < stack->top_a)
	{
		stack->sorted_array[i] = stack->stack_a[i];
		i++;
	}
}
