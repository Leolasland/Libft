# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdanyel <hdanyel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/06 15:09:56 by hdanyel           #+#    #+#              #
#    Updated: 2020/11/10 11:19:45 by hdanyel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a

SRCS    = ft_atoi.c ft_bzero.c

HDRS	= libft.h

OBJS	= $(SRCS:.c=.o)

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

.PHONY:	all clean fclean re

all:	$(NAME)

$(NAME):
		$(CC) $(CFLAGS) -I. $(HDRS) -c $(SRCS)
		ar rcs $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all
