/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parcing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:37:42 by bben-aou          #+#    #+#             */
/*   Updated: 2022/03/15 08:48:26 by bben-aou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**parcing(char **argv, int argc, t_stack *stack)
{
	int		i;
	char	*tab;
	char	*tmp_1;
	char	*tmp_2;

	i = 0;
	tab = NULL;
	tmp_1 = NULL;
	while (++i < argc)
	{
		if (tab == NULL)
			tab = ft_strjoin(argv[i], " ");
		else
		{
			tmp_1 = tab;
			tmp_2 = ft_strjoin(argv[i], " ");
			tab = ft_strjoin(tab, tmp_2);
			free (tmp_1);
			free (tmp_2);
		}
	}
	stack->tab_2 = ft_split(tab, ' ');
	free (tab);
	return (stack->tab_2);
}

void	message_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(0);
}

int	check_numbers(char *str)
{
	int			i;
	int			sign;
	long int	num;

	i = 0;
	num = 0;
	sign = 1;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (!ft_isdigit(str[++i]))
			message_error();
	}
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (false);
		num = (num * 10) + (str[i] - '0');
		if ((num * sign) > INT_MAX || (num * sign) < INT_MIN)
			return (false);
		i++;
	}
	return (true);
}

char	**check_errors(char **argv, int argc, t_stack *stack)
{
	int	i;

	i = 0;
	argv = parcing(argv, argc, stack);
	if (!argv || !argv[0])
		message_error();
	while (argv[i])
	{
		if (check_numbers(argv[i]) == false)
			message_error();
		i++;
	}
	return (argv);
}
