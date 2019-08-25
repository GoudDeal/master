SRCS := ${wildcard srcs/*.c}

OBJS = ${SRCS:.c=.o}

NAME = bsq

CC = cc

RM = rm -f

CFLAGS = -Wall -Werror -Wextra

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS} -fsanitize=address

all:		${NAME}

clean:
			${RM} ${OBJS}
			${RM} include/lib.h.gch

fclean:		clean
			${RM} ${NAME}

re-build:	fclean all

.PHONY:		all fclean clean re-build
