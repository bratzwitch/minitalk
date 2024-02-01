CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = libftprintf.a

PRINT_FILES = ft_printf.c ft_formats.c ft_printffunctions.c ft_hexpointer.c \
			  ft_itoa.c ft_udecimal.c ft_printhex.c

PRINT_OBJS = $(PRINT_FILES:.c=.o)

all: $(NAME)

$(NAME): $(PRINT_OBJS)
		ar rc $(NAME) $(PRINT_OBJS)

clean:
		$(RM) $(PRINT_OBJS)
fclean: clean
		$(RM) $(NAME)
re: fclean all

