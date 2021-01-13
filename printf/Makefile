# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/18 19:51:49 by dcyprien          #+#    #+#              #
#    Updated: 2021/01/13 17:39:44 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	libftprintf/ft_strlen.c				\
			libftprintf/ft_isalpha.c			\
			libftprintf/ft_isdigit.c			\
			libftprintf/ft_atoi_printf.c		\
			libftprintf/ft_strdup.c				\
			libftprintf/ft_substr.c				\
			libftprintf/ft_itoa_printf.c				\
			libftprintf/ft_putchar_ptf.c			\
			libftprintf/ft_putstr_fd_printf.c			\
			libftprintf/ft_putnbr_fd_printf.c			\
			libftprintf/ft_printf.c				\
			libftprintf/ft_initialize.c			\
			libftprintf/ft_setflags.c			\
			libftprintf/ft_print.c				\
			libftprintf/ft_set_stars.c			\
			libftprintf/ft_print_padding.c		\
			libftprintf/ft_size.c				\
			libftprintf/ft_set_padding.c 		\
			libftprintf/ft_print_next.c			\
			libftprintf/ft_itoa_unsigned_printf.c		\
			libftprintf/ft_set_padding_next.c	\
			libftprintf/ft_set_padding_null.c	\
			libftprintf/ft_print_precision.c 	\
			libftprintf/ft_print_padding_next.c	\
			libftprintf/ft_memmove.c			\
			libftprintf/ft_memcpy.c				

NAME	=	libftprintf.a

CC		=	gcc 

CFLAGS	=	-Wall -Wextra -Werror

CCLIB	=	ar

LIBFLAGS	=	rc

OBJS	=	${SRCS:.c=.o}

OBJSBONUS	=	${SRCSBONUS:.c=.o}

RM		=	rm -f


$(NAME):	${OBJS}
	${CCLIB} ${LIBFLAGS} ${NAME} ${OBJS}

all:		${NAME}

clean:		
	${RM} ${OBJS} ${OBJSBONUS}

fclean:		clean
	${RM} ${NAME}

bonus:		${OBJS}
	${CC} ${CFLAGS} -c ${SRCSBONUS}
	${CCLIB} ${NAME} ${OBJS} ${OBJSBONUS}

re:			fclean all

noflag:		
	${CC} ${SRCS} -o libftprintf.a

.PHONY = all clean fclean re bonus noflag

