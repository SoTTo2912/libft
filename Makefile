# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vicarauj <vicarauj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/10 13:07:42 by vicarauj          #+#    #+#              #
#    Updated: 2026/11/10 19:03:10 by vicarauj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
SRC = ft_isalpha \
	ft_isdigit \
	ft_isalnum \
	ft_isascii \
	ft_isprint \
	ft_strlen \
	ft_memset \
	ft_bzero \
	ft_memcpy \
	ft_memmove \
	ft_strlcpy \
	ft_strlcat \
	ft_toupper \
	ft_tolower \
	ft_strchr \
	ft_strrchr \
	ft_strncmp \
	ft_memchr \
	ft_memcmp \
	ft_strnstr \
	ft_atoi \
	ft_calloc \
	ft_strdup \
	ft_substr \
	ft_strjoin \

SRCS = $(addsuffix .c, $(SRC))
OBJS = $(addsuffix .o, $(SRC))

.c.o: $(SRCS) $(BONUS_SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: clean all

bonus: all

.PHONY: all clean fclean re bonus
