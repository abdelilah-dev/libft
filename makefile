NAME = libft.a

SRCS = ft_isalnum.c ft_isdigit.c ft_isalpha.c
OBJS = ${SRCS:.c=.o}

LIBC = ar -rcs
CC = cc 
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

%.o: %.c
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}
	gcc main.c -L. -lft -o program
	./program

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
