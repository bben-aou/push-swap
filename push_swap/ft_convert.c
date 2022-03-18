/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:59:22 by bben-aou          #+#    #+#             */
/*   Updated: 2022/03/15 08:39:32 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*convert(char **tab, int argc, t_stack *stack)
{
	int	i;

	stack->str = malloc(sizeof(int) * argc);
	i = 0;
	while (tab[i])
	{
		stack->str[i] = ft_atoi(tab[i]);
		i++;
	}
	return (stack->str);
}
