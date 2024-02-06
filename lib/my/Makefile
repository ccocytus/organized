##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile lib
##

SRC 	= 	mini_printf.c	\
			my_getnbr.c 		\
			my_put_nbr.c 		\
			my_putchar.c 		\
			my_putstr.c 		\
			my_strcat.c 		\
			my_strcpy.c 		\
			my_strlen.c 		\
			my_putstr_error.c 	\
			my_putnbr_octal.c 	\
			my_putnbr_hex.c 	\
			my_putnbr_bighex.c 	\
			my_putnbr_u.c 		\
			my_putnbr_float.c	\
			my_strcmp.c		\
			my_strdup.c		\

OBJ 	=	$(SRC:.c=.o)

NAME 	= 	libmy.a

RM 	= 	rm -f

all: 	$(NAME)

$(NAME): 	$(OBJ)
	ar rc	$(NAME) $(OBJ)
	cp ./$(NAME) ../
	mkdir -p ../../include/
	cp ./my.h ../../include/
	make clean

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
