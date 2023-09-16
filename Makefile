##
## EPITECH PROJECT, 2021
## Printf_Lucas_SIRAUX
## File description:
## Makefile
##

SRC	=	$(wildcard *.c **/*.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
