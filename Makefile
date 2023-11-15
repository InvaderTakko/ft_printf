NAME	= libftprintf.a
CC = cc
CFLAGS 	= -Wall -Werror -Wextra
ARFLAGS = -rcs
CFILES 	= ft_print_decimal.c ft_print_pointer.c ft_print_hex.c ft_printf.c
		 
#BONUS 	= 
OBJS 	= $(CFILES:.c=.o)
#BONOBJS  = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) 
		ar $(ARFLAGS) $(NAME) $(OBJS) 


#bonus: $(BONOBJS)
#		ar $(ARFLAGS) $(NAME) $(BONOBJS)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -f $(NAME) 

re:	fclean all

.PHONY: all bonus clean fclean re