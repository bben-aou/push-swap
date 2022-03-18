/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instructions_common.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 01:48:06 by bben-aou          #+#    #+#             */
/*   Updated: 2022/03/18 15:35:32 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stack *stack, int status)
{
	sa(stack, status);
	sb(stack, status);
	write(1, "ss\n", 3);
}

void	rr(t_stack *stack, int status)
{
	ra(stack, 0);
	rb(stack, 0);
	if (status == 1)
		write(1, "rb\n", 3);
}

void	rrr(t_stack *stack, int status)
{
	rra(stack, 0);
	rrb(stack, 0);
	if (status == 1)
		write(1, "rrr\n", 4);
}
