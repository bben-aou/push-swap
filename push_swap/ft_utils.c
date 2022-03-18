/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:43:34 by bben-aou          #+#    #+#             */
/*   Updated: 2022/03/18 17:12:45 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	init_b(t_stack *stack, int argc)
{
	stack->stack_a = malloc(sizeof(int) * argc);
	if (!(stack->stack_a))
		exit(1);
	stack->stack_b = malloc(sizeof(int) * argc);
	if (!(stack->stack_b))
		exit(1);
	stack->top_a = -1;
	stack->top_b = -1;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		++i;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	execute_instruction(t_stack *stack, int argc, char *arg)
{
	if (ft_strcmp(arg, "sa") == 0)
		sa(stack, 0);
	else if (ft_strcmp(arg, "sb ") == 0)
		sb(stack, 0);
	else if (ft_strcmp(arg, "ss\n") == 0)
		ss(stack, 0);
	else if (ft_strcmp(arg, "pa\n") == 0)
		pa(stack, 0);
	else if (ft_strcmp(arg, "pb") == 0)
		pb(stack, argc, 0);
	else if (ft_strcmp(arg, "ra") == 0)
		ra(stack, 0);
	else if (ft_strcmp(arg, "rb") == 0)
		rb(stack, 0);
	else if (ft_strcmp(arg, "rr") == 0)
		rr(stack, 0);
	else if (ft_strcmp(arg, "rra") == 0)
		rra(stack, 0);
	else if (ft_strcmp(arg, "rrb") == 0)
		rrb(stack, 0);
	else if (ft_strcmp(arg, "rrr") == 0)
		rrr(stack, 0);
	else
		message_error();
}
