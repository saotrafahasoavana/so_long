SRCS 	= check_map.c ft_split.c main.c window.c utils.c key_handle.c move.c error.c

NAME	= so_long

CC 	= gcc
FLAGS	= -Wall -Werror -Wextra -g
MLX_FLAGS	= -L/home/saandria/42cursus/so_long/minilibx-linux -lmlx -lX11 -lXext -lm

all:	$(NAME)
$(NAME):	
			@cd get_next_line && make
			$(CC) $(FLAGS) $(SRCS) $(MLX_FLAGS) get_next_line/gnl.a -o $(NAME)

clean:
		@cd get_next_line && make clean

fclean:
		@cd get_next_line && make fclean
		rm -f $(NAME)
		clear

re:	fclean all