NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = 	ft_printf.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_putchar.c \
		ft_tohex.c \

OBJ = ${SRCS:.c=.o}

all:${NAME}

${NAME}:${OBJ}
	ar rc ${NAME} ${OBJ}

clean : 
	rm -f ${OBJ}
fclean : clean
	rm -f ${NAME}
re :fclean all