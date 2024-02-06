##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## my_ls
##

SRC	=	my_organized.c			\
		SRC/convert_string.c			\
		SRC/material_ty_str.c			\
		SRC/free_workshop.c				\
		SRC/initialize_workshop.c		\
		SRC/display.c					\
		SRC/add.c						\
		SRC/del.c						\
		SRC/args_null.c					\
		SRC/sort.c						\
		SRC/sort_name.c					\
		SRC/sort_type.c					\
		SRC/sort_id.c					\

OBJ	=	$(SRC:.c=.o)


CFLAGS = -g3

NAME	=	organized

all : $(NAME)

$(NAME):	$(OBJ)
	make -C lib/my/
	gcc $(OBJ) $(CFLAGS) -o $(NAME) -L ./lib -lmy -lshell

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)
	rm -f lib/libmy.a
	rm -f lib/my/libmy.a
re: fclean all
