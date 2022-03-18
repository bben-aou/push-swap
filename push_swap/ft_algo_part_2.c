/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_part_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 05:02:48 by bben-aou          #+#    #+#             */
/*   Updated: 2022/03/14 05:05:13 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_p2(t_stack *stack, int argc)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		chose_the_top_to_pus_in_b(stack);
		i++;
	}
}
