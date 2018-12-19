##
## Makefile for my_survey in /home/decomb_s/Backup/ACC2
## 
## Made by Sylvain Decombe
## Login   <decomb_s@epitech.net>
## 
## Started on  Sun Mar 30 00:39:54 2014 Sylvain Decombe
## Last update Sun Mar 30 00:45:21 2014 Sylvain Decombe
##

SRC=		check.c \
		display.c \
		gere_reponse.c \
		main.c \
		my_getnbr.c \
		my_putchart.c \
		my_put_nbr.c \
		my_putstr.c \
		my_strdup.c \
		my_strlen.c \
		prompt.c \
		xmalloc.c

CC=		cc

RM=		rm -f

NAME=		my_survey

OBJ=		$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY: 	all clean fclean re
