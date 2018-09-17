SOURCE=megaphone.cpp
PROGRAM=megaphone

CC=clang++

FLAGS= -Wall -Wextra -Werror

all:$(PROGRAM)

$(PROGRAM): $(SOURCE) 
		$(CC) $(SOURCE) -o $(PROGRAM)

clean:
	rm -f $(PROGRAM)

re: clean all