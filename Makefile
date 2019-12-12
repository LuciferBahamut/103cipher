##
## EPITECH PROJECT, 2019
## makefile
## File description:
## 103cipher
##

NAME	=	103cipher

SRC	=	src/main.c \
		src/display_help.c \
		src/error_handling.c \
		src/make_key.c \
		src/make_password.c \
		src/my_strlen.c \
		src/display.c \
		src/architect.c \
		src/make_emptymatrix.c

CC	=	gcc

DEFLAGS	=	-W -Wextra -Wall -g3 -lm

CPPFLAGS	=	-I./include/

CFFLAGS	=	tests/unit_tests.c -I./include --coverage -lcriterion

OBJ	=	$(SRC:.c=.o)

all	:	$(OBJ)
		$(CC) $(DEFLAGS) -o $(NAME) $(OBJ) $(CPPFLAGS)

TU	:
		$(CC) -o unit_tests lib/my/*.c $(CFFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)
		rm -f *#
		rm -f *~
		rm -f src/*~
		rm -f include/*~
		rm -f *.gcda
		rm -f *.gcno

re	:	fclean all

.PHONY	:	all TU clean fclean re
