# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kngwato <kngwato@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/14 10:41:36 by kngwato           #+#    #+#              #
#    Updated: 2018/06/14 11:20:51 by kngwato          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=clang++

FLAGS= -c -Wall -Wextra -Werror

all: prog

prog: templates.o
	$(CC) templates.o -o templates

templates.o: templates.cpp
	$(CC) $(FLAGS) templates.cpp

clean:
	rm -rf *.o templates

re: clean all