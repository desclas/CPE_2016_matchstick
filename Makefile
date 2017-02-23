##
## Makefile for  in /home/mathias/Bureau/matchstick
## 
## Made by Mathias
## Login   <mathias.descoin@epitech.eu@epitech.net>
## 
## Started on  Thu Feb 23 15:15:57 2017 Mathias
## Last update Thu Feb 23 15:21:10 2017 Mathias
##

SRC	=	main.c		\
		fich1.c		\
		fich2.c		\
		fich3.c		\
		fich4.c		\
		fich5.c		\
		fichier1.c	\
		fichier2.c	\
		fichier3.c	\
		fichier4.c	\
		fichier5.c	\
		fichier6.c

OBJ	=	$(SRC:.c=.o)

NAME	=	matchstick

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
