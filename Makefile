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

all:		$(NAME)

$(NAME):	$(SRC)
	ar rc $(NAME) $(SRC)

clean:
	rm -f $(SRC)
	rm -f $(TEST_F)

fclean:		clean
	rm -f $(NAME)
	rm -f ./tests

test:		all $(TEST_F)
	gcc -o ./tests $(TEST_F) -L. -lmy
	rm -f $(TEST_F)