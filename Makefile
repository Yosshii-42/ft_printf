NAME 	= libftprintf.a
CC		= cc
FLAGS	= -Wall -Wextra -Werror
MAKE	= make
LIBFT	= ./libft/libft.a
SRC_DIR = .
SRCS	= ft_printf.c \
		  ft_put_and_count.c \
		  ft_putnbr_base_fd.c
OBJS	= $(SRCS:.c=.o)

%.o:%.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(MAKE) fclean -C ./libft
	rm -f $(OBJS)

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
