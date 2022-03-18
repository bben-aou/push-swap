/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:06:36 by bben-aou          #+#    #+#             */
/*   Updated: 2022/03/18 17:13:36 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "../get_next_line/get_next_line.h"
# include "./push_swap.h"
# include <stdbool.h>

void	init_b(t_stack *stack, int argc);
int		ft_strcmp(char *s1, char *s2);
void	execute_instruction(t_stack *stack, int argc, char *arg);
#endif
