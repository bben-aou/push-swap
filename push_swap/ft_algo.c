/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 15:50:04 by bben-aou          #+#    #+#             */
/*   Updated: 2022/03/18 15:34:24 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	chose_best_move_b(t_stack *stack, int max_index)
{
	int	i;
	int	rb_c;
	int	rrb_c;

	rb_c = max_index;
	rrb_c = (stack->top_b + 1) - max_index;
	if (rb_c < rrb_c)
	{
		i = rb_c + 1;
		while (--i > 0)
			rb(stack, 1);
		pa(stack, 1);
	}
	else
	{
		i = rrb_c + 1;
		while (--i > 0)
			rrb(stack, 1);
		pa(stack, 1);
	}
}

void	chose_the_top_to_pus_in_b(t_stack *stack)
{
	int	max_index;

	max_index = get_index_of_max_on_b(stack);
	chose_best_move_b(stack, max_index);
}

void	check_cases(t_stack *stack, int first_pvt, int second_pvt, int argc)
{
	if (stack->stack_a[0] <= stack->sorted_array[first_pvt])
	{
		if (stack->stack_a[0] > stack->sorted_array[second_pvt])
			pb(stack, argc, 1);
		if (stack->stack_a[0] <= stack->sorted_array[second_pvt])
		{
			pb(stack, argc, 1);
			rb(stack, 1);
		}
	}
	else
		ra(stack, 1);
}

void	algo(t_stack *stack, int argc, int div)
{
	int	first_pvt;
	int	second_pvt;
	int	j;

	j = stack->top_a;
	if (argc >= 500)
		div = 5;
	else
		div = 3;
	while ((stack->top_a - 1) != 0)
	{
		copy_stack_to_array(stack);
		sort_array(stack);
		first_pvt = (stack->top_a / div) + 1;
		second_pvt = first_pvt / 2;
		while (j >= 0)
		{
			check_cases(stack, first_pvt, second_pvt, argc);
			j--;
		}
		j = stack->top_a;
	}
	algo_p2(stack, argc);
}
