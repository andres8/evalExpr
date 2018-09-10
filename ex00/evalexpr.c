/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evalexpr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiaz-ac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 14:04:50 by ndiaz-ac          #+#    #+#             */
/*   Updated: 2018/09/08 14:04:54 by ndiaz-ac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

char	**whiout_space(char *str)
{
	int		i;
	int		j;
	char	**str2;

	str2 = (char**)malloc(sizeof(char*));
	str2[0] = (char*)malloc(sizeof(char) * ft_strlen(str + 1));
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		else
		{
			str2[0][j] = str[i];
			i++;
			j++;
		}
	}
	str2[0][j] = '\0';
	return (str2);
}

int		eval_expr2(char **str)
{
	str = whiout_space(str[0]);
	return (sum_sub(str));
}

int		eval_expr(char *str)
{
	return (eval_expr2(&str));
}

int		do_op(int a, char o, int b)
{
	if (o == '+')
		return (a + b);
	else if (o == '-')
		return (a - b);
	else if (o == '*')
		return (a * b);
	else if (o == '/')
		return (a / b);
	else if (o == '%')
		return (a % b);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
