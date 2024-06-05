NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS = ${SRCS:.c=.o}

CC = gcc

FLAG = -Wall -Wextra -Werror

.c.o :
	${CC} ${FLAG} -I includes -c $< -o ${<:.c=.o}

$(NAME) : ${OBJS}
		ar rcs ${NAME} ${OBJS}

all :	${NAME}

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean all
