# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/15 11:01:26 by kkawano           #+#    #+#              #
#    Updated: 2021/07/18 21:10:51 by kkawano          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_atoi.c\
		srcs/ft_bzero.c\
		srcs/ft_calloc.c\
		srcs/ft_isalnum.c\
		srcs/ft_isalpha.c\
		src/ft_isascii.c\
		src/ft_isdigit.c\
		src/ft_isprint.c\
		src/ft_itoa.c\
		src/ft_memchr.c\
		src/ft_memcmp.c\
		src/ft_memmove.c\
		src/ft_memset.c\
		src/ft_putchar_fd.c\
		src/ft_putendl_fd.c\
		src/ft_putnbr_fd.c\
		src/ft_putstr_fd.c\
		src/ft_split.c\
		src/ft_strchr.c\
		src/ft_strdup.c\
		src/ft_striteri.c\
		src/ft_strjoin.c\
		src/ft_strlcat.c\
		src/ft_strcpy.c\
		src/ft_strlen.c\
		src/ft_strmapi.c\
		src/ft_strcmp.c\
		src/ft_strnstr.c\
		src/ft_strrchr.c\
		src/ft_strtrim.c\
		src/ft_substr.c\
		src/ft_tolower.c\
		src/ft_toupper.c\

OBJS = ${SRCS:.c=.o}

INC = includes

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

$(NAME): $(OBJS)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re bonus
