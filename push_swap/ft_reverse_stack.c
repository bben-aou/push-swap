/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:34:04 by bben-aou          #+#    #+#             */
/*   Updated: 2022/03/13 05:29:53 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_stack_a(t_stack *stack, int len)
{
	int	i;
	int	end;
	int	temp;

	i = 0;
	end = len - 1;
	while (i < len / 2)
	{
		temp = stack->stack_a[end];
		stack->stack_a[end] = stack->stack_a[i];
		stack->stack_a[i] = temp;
		i++;
		end--;
	}
}

void	reverse_stack_b(t_stack *stack, int len)
{
	int	i;
	int	end;
	int	temp;

	i = 0;
	end = len - 1;
	while (i < len / 2)
	{
		temp = stack->stack_b[end];
		stack->stack_b[end] = stack->stack_b[i];
		stack->stack_b[i] = temp;
		i++;
		end--;
	}
}
