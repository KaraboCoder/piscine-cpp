CC=clang++

FLAGS= -c -Wall -Wextra -Werror

all: prog

prog: main.o Contact.o
	$(CC) main.o Contact.o -o phonebook

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp

Contact.o: Contact.cpp Contact.hpp
	$(CC) $(FLAGS) Contact.cpp Contact.hpp

clean:
	rm -rf *.o phonebook

re: clean all