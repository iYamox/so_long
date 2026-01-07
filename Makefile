# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amary <amary@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/06 20:30:20 by amary             #+#    #+#              #
#    Updated: 2026/01/07 15:55:28 by amary            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CC = cc -Wall -Werror -Wextra
SRC = srcs/main.c \
		../../1er_cercle/get_next_line/get_next_line.c \
		../../1er_cercle/get_next_line/get_next_line_utils.c \
		srcs/parsing/read_map.c \
		srcs/parsing/initialize_map.c \
		srcs/parsing/ft_parsing.c \
		srcs/parsing/is_rectangle.c \
		srcs/parsing/is_correct_wall.c \
		

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all