# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kngwato <kngwato@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/14 10:41:36 by kngwato           #+#    #+#              #
#    Updated: 2018/06/14 11:38:25 by kngwato          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=clang++

FLAGS= -c -Wall -Wextra -Werror

all: prog

prog: iter.o
	$(CC) iter.o -o iter

templates.o: iter.cpp
	$(CC) $(FLAGS) iter.cpp

clean:
	rm -rf *.o iter

re: clean all