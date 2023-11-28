NAME	= libftprintf.a
CC = cc
CFLAGS 	= -Wall -Werror -Wextra
ARFLAGS = -rcs
CFILES 	= ft_printf_decimal.c ft_printf_pointer.c ft_printf_hex.c ft_printf.c 
		 
BONUS 	= ft_printf_bonus.c ft_printf_hex_bonus.c ft_printf_decimal_bonus.c ft_printf_str_bonus.c ft_printf_pointer_bonus.c ft_printf_bonus_bonus.c
OBJS 	= $(CFILES:.c=.o)
BONOBJS  = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) 
		ar $(ARFLAGS) $(NAME) $(OBJS) 


bonus: $(BONOBJS)
		ar $(ARFLAGS) $(NAME) $(BONOBJS)

clean:
		rm -rf $(OBJS) $(BONOBJS)

fclean: clean
		rm -f $(NAME) 

re:	fclean all

.PHONY: all bonus clean fclean re

#t:
#	$(CC) $(CFLAGS) -g $(BONUS) testing.c