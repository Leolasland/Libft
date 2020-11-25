# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdanyel <hdanyel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/06 15:09:56 by hdanyel           #+#    #+#              #
#    Updated: 2020/11/25 13:28:24 by hdanyel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a

SRCS    = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
		ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
		ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_strlen.c ft_tolower.c \
		ft_toupper.c

HDRS	= libft.h

OBJS	= $(SRCS:.c=.o)

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -c

RM		= rm -rf

.PHONY:	all clean fclean re

all:	$(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

%.o:	%.c $(HDRS)
		$(CC) $(CFLAGS) -I$(HDRS) $< -o $@

clean:
		$(RM) $(OBJS) *.gch

fclean:	clean
		$(RM) $(NAME)

re:		fclean all
