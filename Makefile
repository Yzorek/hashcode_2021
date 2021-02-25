##
## EPITECH PROJECT, 2019
## Makefile rush 2
## File description:
## Makefile
##

SRC		=		main.cpp	\
				Ilian.cpp	\
				Parser.cpp	\
				Street.cpp	\

OBJ		=		$(SRC:.cpp=.o)

NAME		=		my_traffic

all:		$(NAME)

CFLAGS	= 	-I./ -Wall -Wextra -Werror

$(NAME):	$(OBJ)
	g++ -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm	-f 	$(OBJ)

fclean: clean
	rm 	-f 	$(NAME)

re:	fclean	all
