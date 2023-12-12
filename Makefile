NAME = libftprintf.a

SRC = ft_printf.c ft_strlen.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_hex.c ft_ptr.c ft_unsigned.c

OBJS = $(SRC:.c=.o)

CC = cc 
CFLAGS = -Wall -Wextra -Werror
RM = rm -f 

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS) a.out

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
