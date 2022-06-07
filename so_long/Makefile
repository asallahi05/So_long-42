NAME = so_long
CC = cc
FLAGS = -Wall -Wextra -Werror
M_SRCS = so_long.c \
	src/moving_utils.c \
	src/moving.c \
	src/add_line.c \
	src/check_line.c \
	src/check_name.c \
	src/get_next_line.c \
	src/get_next_line_utils.c \
	src/parser.c \
	src/put_img.c \
	src/render.c \
	so_long_utils.c

M_OBJ = $(M_SRCS:.c=.o)

all : $(NAME)

$(NAME): $(M_OBJ)
	$(CC) $(FLAGS) $^ -o $@ -framework AppKit -framework OpenGL -lmlx
%.o : %.c so_long.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(M_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all bonus
