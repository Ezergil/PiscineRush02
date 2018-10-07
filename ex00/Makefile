# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlucas-l <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/07 19:43:19 by jlucas-l          #+#    #+#              #
#    Updated: 2018/10/07 23:24:26 by eurras-i         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
HEADERS = includes/

all:
	gcc -Wall -Wextra -Werror -I$(HEADERS) main.c rush00.c str_utils.c rush_comparator.c -o $(NAME)

clean:
	rm -f main.o rush00.o str_utils.o rush_comparator.o

fclean: clean
	rm -f $(NAME)

re: fclean all
