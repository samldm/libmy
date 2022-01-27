##
## EPITECH PROJECT, 2022
## libmy
## File description:
## Makefile
##

SRC		=	$(patsubst %.c,%.o, \
				$(wildcard *.c) \
			)

BIN		=	./a.out

CC		= 	gcc

C_FLAGS	=	-Wall -Wextra -I include/

LIB_DIR =	lib/

L_FLAGS =	-Llib -lmy

all:	lib $(BIN)

$(BIN):	$(SRC)
	$(MAKE) -C $(LIB_DIR)
	$(CC) -o $(BIN) $(SRC) $(L_FLAGS) $(C_FLAGS)

clean:
	$(MAKE) -C $(LIB_DIR) clean
	rm -f $(SRC)

fclean:	clean
	$(MAKE) -C $(LIB_DIR) fclean
	rm -f $(BIN)

re:		fclean all