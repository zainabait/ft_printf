CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_putchar.c ft_putstr.c ft_put_int_nbr.c ft_put_uns_nbr.c \
	ft_put_addr.c ft_put_upper_hex.c ft_put_lower_hex.c ft_printf.c

OBJS = $(SRC:.c=.o)

NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJS)
		ar -rc $(NAME) $(OBJS)

%.o: %.c ft_printf.h
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re:		fclean all

.PHONY: clean