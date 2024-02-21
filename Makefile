NAME = so_long

SRCS = main.c img_to_xpm.c check_map.c create_base_map.c handle_moovs.c init_back_ground.c init_rest.c check_map2.c destroy_image.c cleaners.c keys_handler.c

LIBFT = libft.a

OBJS = ${SRCS:.c=.o}

CC = cc -Wall -Werror -Wextra

all: ${NAME}

${NAME}: ${SRCS} Makefile so_long.h ${LIBFT}
		${CC} ${SRCS} ${LIBFT} -Lmlx -lmlx -Imlx -lXext -lX11 -lm -lz -g3 -o ${NAME}

${LIBFT}: Makefile libft/libft.h libft/get_next_line/get_next_line.h
		make -C ./libft 
		@mv ./libft/libft.a .

clean:
		rm -rf ${OBJS}
		rm -f ./libft.a
		make -C ./libft clean

fclean:
		rm -rf ${NAME} ${OBJS}
		rm -f ./libft.a
		make -C ./libft fclean

re: fclean all