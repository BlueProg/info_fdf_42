# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmole <mmole@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/29 18:22:46 by mmole             #+#    #+#              #
#    Updated: 2014/04/27 04:35:40 by mmole            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=		main.c \
				parse.c \
				parsing.c \
				tracing.c \
				tracing2.c \
			
OBJ		=		$(SRC:.c=.o)

LIB		=		libft/libft.a

INC		=		libft/includes

NAME	=		fdf

RM		=		rm -f

FLAG	=		-Wall -Werror -Wextra

LDFLAG	=		-lmlx -lXext -lX11

all: libft.a $(NAME)

$(NAME): $(OBJ)
		gcc -g $(FLAG) -c $(SRC)  -I $(INC)
		gcc -o $(NAME) $(OBJ) -L /usr/X11/lib $(LDFLAG) -L. $(LIB) -g

libft.a:
		make -C libft/

re:		fclean all

clean:
		@$(RM) $(OBJ)
		make -C libft/ clean

fclean:
		@$(RM) $(OBJ) $(NAME)
		make -C libft/ fclean
		@$(RM) libft.h.gch

.PHONY: clean fclean re
