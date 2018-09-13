/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiaz-ac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 13:53:37 by ndiaz-ac          #+#    #+#             */
/*   Updated: 2018/09/10 14:21:13 by ndiaz-ac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H
# define HEADERS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char **str);
int		do_op(int a, char o, int b);
int		sum_sub(char **str);
int		ft_atoi(char **str);
int		first_op(char **str);

#endif
