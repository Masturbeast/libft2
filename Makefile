# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atep <atep@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/21 15:17:17 by atep              #+#    #+#              #
#    Updated: 2020/01/30 19:46:42 by atep             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = *.c

CC		=	gcc

FLAGS	=	-g -Wall -Werror -Wextra

all:	$(NAME)

OBJS	=	$(SRCS:.c=.o)

$(NAME) : $(SRCS)
	$(CC) $(FLAGS) -c $?
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME) $(OBJS)

re: fclean all

.PHONY: all clean flclean re
