FLAGS = -Wall -Werror -Wextra -std=c++98
NAME = megaphone
comp = g++
SRC = megaphone.cpp

all: ${NAME}

${NAME}: ${SRC}
	${comp} ${FLAGS} ${SRC} -o ${NAME}

re: clean all

clean:
	rm ${NAME}
