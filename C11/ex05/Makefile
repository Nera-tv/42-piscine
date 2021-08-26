SRCS	= main.c ft_putnbr.c ft_atoi.c ft_putstr.c ft_strlen.c operation.c
OBJS	= ${SRCS:.c=.o}
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= do-op

.c.o:
	${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

all :	${NAME}

${NAME} :	${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean :
	rm -f ${OBJS}

fclean :	clean
	rm -f ${NAME}

re :		fclean all