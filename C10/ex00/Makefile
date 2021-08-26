SRCS	= main.c
OBJS	= ${SRCS:.c=.o}
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= ft_display_file

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