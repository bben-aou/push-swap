/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instructions_a.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 01:41:48 by bben-aou          #+#    #+#             */
/*   Updated: 2022/03/17 08:25:24 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack, int status)
{
	int	temp;
	int	i;

	i = 0;
	temp = stack->stack_a[i];
	stack->stack_a[i] = stack->stack_a[i + 1];
	stack->stack_a[i + 1] = temp;
	if (status == 1)
		write(1, "sa\n", 3);
}

void	ra(t_stack *stack, int status)
{
	int	i;
	int	temp;

	temp = stack->stack_a[0];
	i = 1;
	while (i < stack-> top_a + 1)
	{
		stack->stack_a[i - 1] = stack->stack_a[i];
		i++;
	}
	stack->stack_a[stack->top_a - 1] = temp;
	if (status == 1)
		write(1, "ra\n", 3);
}

void	rra(t_stack *stack, int status)
{
	int	i;
	int	temp;

	temp = stack->stack_a[stack->top_a - 1];
	i = stack->top_a;
	while (i > 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->stack_a[0] = temp;
	if (status == 1)
		write(1, "rra\n", 4);
}

void	pa(t_stack *stack, int status)
{
	int	i;

	stack->top_a++;
	i = stack->top_a - 1;
	while (i > 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->stack_a[0] = stack->stack_b[0];
	i = 0;
	while (i < stack->top_b)
	{
		stack->stack_b[i] = stack->stack_b[i + 1];
		i++;
	}
	stack->top_b--;
	if (status == 1)
		write(1, "pa\n", 3);
}
