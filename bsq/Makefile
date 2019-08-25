# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcyprien <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/19 10:38:53 by dcyprien          #+#    #+#              #
#    Updated: 2019/08/20 12:56:16 by dcyprien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	srcs/ft.c srcs/ft1.c srcs/ft2.c srcs/ft_user_entry.c srcs/main.c

NAME	=	bsq

OBJS	=	${SRCS:.c=.o}

HEADER	=	includes/libft.h

CC		=	gcc

RM		= 	rm -f

CFLAGS	=	#-Wall -Wextra -Werror

${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY = all clean fclean re
