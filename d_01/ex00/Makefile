CC=clang++

FLAGS= -c -Wall -Wextra -Werror

all: prog

prog: main.o Pony.o
	$(CC) main.o Pony.o -o pony

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp

Contact.o: Pony.cpp Pony.hpp
	$(CC) $(FLAGS) Pony.cpp Pony.hpp

clean:
	rm -rf *.o pony

re: clean all