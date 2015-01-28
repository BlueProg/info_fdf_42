# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmole <mmole@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/04/27 05:06:00 by mmole             #+#    #+#              #
#    Updated: 2014/04/27 05:06:03 by mmole            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILE = ft_bzero \
	   ft_strlen \
	   ft_strdup \
	   ft_strcpy \
	   ft_strncpy \
	   ft_strcat \
	   ft_strncat \
	   ft_strlcat \
	   ft_strchr \
	   ft_strrchr \
	   ft_strstr \
	   ft_strnstr \
	   ft_strcmp \
	   ft_strncmp \
	   ft_atoi \
	   ft_isalpha \
	   ft_isdigit \
	   ft_isalnum \
	   ft_isascii \
	   ft_isprint \
	   ft_toupper \
	   ft_tolower \
	   ft_strnew \
	   ft_strdel \
	   ft_strequ \
	   ft_strnequ \
	   ft_strsub \
	   ft_strjoin \
	   ft_strtrim \
	   ft_strsplit \
	   ft_itoa \
	   ft_putchar \
	   ft_putstr \
	   ft_putendl \
	   ft_putnbr \
	   ft_putchar_fd \
	   ft_putstr_fd \
	   ft_putendl_fd \
	   ft_putnbr_fd \
	   ft_strndup \
	   ft_memalloc \
	   ft_memchr \
	   ft_memset \
	   ft_memmove \
	   ft_memcpy \
	   ft_memdel \
	   get_next_line

SRC = $(addsuffix .c, $(FILE))

OBJ = $(addsuffix .o, $(FILE))

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc -I includes $(CFLAGS) -c $(SRC)
	@ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
