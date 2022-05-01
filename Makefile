NAME	= push_swap

CFLAGS	= -Wall -Wextra -Werror

CC		= gcc

HEADER		= push_swap.h

SRCS	= main.c push_swap_utilities.c push_swap_list.c push_swap_list_two.c push_swap_operates.c push_swap_operates_two.c\
			push_swap_utilities_two.c push_swap_counters_one.c push_swap_counters_two.c ft_decision.c ft_ways.c \
			push_swap_utilities_three.c push_swap_operates_three.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME) $(NAMEC)
%.o: 	%.c $(HEADER)
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS) $(HEADER)
			$(MAKE) all -C ./lib
			cp lib/libft.a ./$(NAME)
			$(CC) $(OBJS) ./lib/libft.a -o ${NAME}

clean:
	$(MAKE) clean -C ./lib
	-rm -rf $(OBJS)
	
fclean: clean
	$(MAKE) fclean -C ./lib
	-rm -rf $(NAME)

re:		fclean all

.PHONY: all clean fclean re