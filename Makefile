##
## EPITECH PROJECT, 2022
## libmy
## File description:
## Makefile
##

SRC		=	$(patsubst %.c,%.o, $(wildcard ./sources/*.c))

NAME	=	./libmy.a

HEADER	=	./includes/my.h

all:		$(NAME)

$(NAME):	$(SRC)
	ar rc $(NAME) $(SRC)

clean:
	rm -f $(SRC)

fclean:		clean
	rm -f $(NAME)