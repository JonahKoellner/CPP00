# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/08 09:50:40 by jkollner          #+#    #+#              #
#    Updated: 2023/10/20 14:43:57 by jkollner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name = Accounts
cc = c++
cflags = -Wall -Werror -Wextra -std=c++98
src = test.cpp Account.cpp
obj = ${src:.cpp=.o}

all: ${name}

${name}: ${obj}
	${cc} ${cflags} ${obj} -o ${name}

clean:
	rm -f ${obj}

fclean: clean
	rm -f ${name}

re:	fclean all

.PHONY: all ${name} clean fclean
