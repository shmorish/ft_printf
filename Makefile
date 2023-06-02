NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

INCLUDE = 'ft_printf.h'

M_SRCS = ft_printf.c

OBJS = $(M_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

.c.o: $(OBJS)
	$(CC) $(CFLAGS) -I $(INCLUDE) -c $< -o $@

clean:
	$(RM) $(OBJS) $(B_SRCS:.c=.o)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all