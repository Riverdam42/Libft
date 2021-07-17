# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkawano <kkawano@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/15 11:01:26 by kkawano           #+#    #+#              #
#    Updated: 2021/07/17 12:07:29 by kkawano          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


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

OBJS = srcs/ft_atoi.o\
		srcs/ft_bzero.o\
		srcs/ft_calloc.o\
		srcs/ft_isalnum.o\
		srcs/ft_isalpha.o\
		src/ft_isascii.o\
		src/ft_isdigit.o\
		src/ft_isprint.o\
		src/ft_itoa.o\
		src/ft_memchr.o\
		src/ft_memcmp.o\
		src/ft_memmove.o\
		src/ft_memset.o\
		src/ft_putchar_fd.o\
		src/ft_putendl_fd.o\
		src/ft_putnbr_fd.o\
		src/ft_putstr_fd.o\
		src/ft_split.o\
		src/ft_strchr.o\
		src/ft_strdup.o\
		src/ft_striteri.o\
		src/ft_strjoin.o\
		src/ft_strlcat.o\
		src/ft_strcpy.o\
		src/ft_strlen.o\
		src/ft_strmapi.o\
		src/ft_strcmp.o\
		src/ft_strnstr.o\
		src/ft_strrchr.o\
		src/ft_strtrim.o\
		src/ft_substr.o\
		src/ft_tolower.o\
		src/ft_toupper.o

INC = includes

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

$(NAME): $(OBJS)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -I $(INC) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: alll clean fclean re
