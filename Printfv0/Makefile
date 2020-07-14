# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: limartin <limartin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/29 18:20:12 by limartin          #+#    #+#              #
#    Updated: 2020/02/13 03:12:11 by limartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

ROOT_PATH = ./

SRC_PATH = ./ft_printf_srcs/

INCL_PATH = ./

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRC		= $(ROOT_PATH)ft_printf.c \
		$(SRC_PATH)input.c \
		$(SRC_PATH)switchboard.c \
		$(SRC_PATH)output_c.c \
		$(SRC_PATH)output_s.c \
		$(SRC_PATH)output_p.c \
		$(SRC_PATH)output_d.c \
		$(SRC_PATH)output_i.c \
		$(SRC_PATH)output_u.c \
		$(SRC_PATH)output_x.c \
		$(SRC_PATH)output_xcap.c \
		$(SRC_PATH)output_pct.c

OBJ := ${SRC:%.c=%.o}

COMPILE_OBJECTS = $(OBJ)

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c -o $@ $< -I $(INCL_PATH)

$(NAME): $(COMPILE_OBJECTS)
	ar rc $(NAME) $(COMPILE_OBJECTS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
