CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

SRCS = ft_print_char.c ft_print_str.c ft_print_adress.c ft_print_int.c ft_print_unsigned.c ft_print_hex.c ft_printf.c

OBJS = $(SRCS:.c=.o)
DEPS = $(SRCS:.c=.d)

AR = ar rcs
RM = rm -f

%.o : %.c
	$(CC) $(CFLAGS) -MMD -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	$(AR) $@ $^

clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)

re: fclean all

-include ${DEPS}
.PHONY: all clean fclean re
