# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndiaz-ac <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/03 21:12:01 by ndiaz-ac          #+#    #+#              #
#    Updated: 2018/09/09 20:42:51 by ndiaz-ac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME= eval_expr
SRCS= *.c
OBJETS= *.o
HEADER_FOLDER= ./includes/

all: make_eval

make_eval:
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRCS)

clean:
	/bin/rm -f $(OBJETS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
