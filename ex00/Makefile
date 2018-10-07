# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlucas-l <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/07 19:43:19 by jlucas-l          #+#    #+#              #
#    Updated: 2018/10/07 19:46:18 by jlucas-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

all:
	gcc -Wall -Wextra -Werror -c main.c rush00.c str_utils.c
	gcc -Wall -Wextra -Werror -o main.o rush00.o str_utils.o

clean:
	rm -f main.o rush00.o str_utils.o

fclean: clean
	rm -f $(NAME)

re: fclean all
