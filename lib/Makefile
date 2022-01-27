##
## EPITECH PROJECT, 2022
## libmy
## File description:
## Makefile
##

SRC		=	$(patsubst %.c,%.o, $(wildcard ./sources/*.c))

NAME	=	./libmy.a

HEADER	=	./includes/my.h

TEST_F	=	$(patsubst %.c,%.o, ./tests.c)

all:		$(NAME) copy

$(NAME):	$(SRC)
	ar rc $(NAME) $(SRC)

copy:
	mkdir -p ../../includes
	cp ./includes/my.h ../includes/my.h

clean:
	rm -f $(SRC)
	rm -f $(TEST_F)

fclean:		clean
	rm -f $(NAME)
	rm -f ./tests

re:			fclean all