CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

SRCS = ft_print_char.c ft_print_str.c ft_print_adress.c ft_print_int.c ft_print_unsigned.c ft_print_hex.c ft_printf.c

OBJS = $(SRCS:.c=.o)

AR = ar rcs
RM = rm -f

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
