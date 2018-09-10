/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evalfunc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiaz-ac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 17:59:21 by ndiaz-ac          #+#    #+#             */
/*   Updated: 2018/09/09 17:59:33 by ndiaz-ac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int		ft_atoi(char **str)
{
	int		sing;
	int		result;

	sing = 1;
	result = 0;
	if ((*str)[0] == '-' || (*str)[0] == '+')
	{
		if ((*str)[0] == '-')
			sing *= -1;
		*str = *str + 1;
	}
	if ((*str)[0] == '(')
	{
		*str = *str + 1;
		result = sum_sub(str);
		if ((*str)[0] == ')')
			*str = *str + 1;
		return (result);
	}
	while ((*str)[0] > 47 && (*str)[0] < 58)
	{
		result = result * 10 + (*str)[0] - 48;
		*str = *str + 1;
	}
	return (result * sing);
}

int		first_op(char **str)
{
	int		a;
	int		b;
	char	op;

	a = ft_atoi(str);
	while ((*str[0]) == '*' || (*str[0]) == '/' || (*str[0]) == '%')
	{
		op = (*str)[0];
		*str = *str + 1;
		b = ft_atoi(str);
		a = do_op(a, op, b);
	}
	return (a);
}

int		sum_sub(char **str)
{
	int		a;
	int		b;
	char	op;

	a = ft_atoi(str);
	while ((*str)[0] != '\0' && (*str)[0] != ')')
	{
		op = (*str)[0];
		*str = *str + 1;
		if (op == '-' || op == '+')
			b = first_op(str);
		else
			b = ft_atoi(str);
		a = do_op(a, op, b);
	}
	return (a);
}
