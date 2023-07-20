CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_display_file.c
OBJS = $(SRCS:.c=.o)
NAME = ft_display_file

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS) -o $(OBJS) -I

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
