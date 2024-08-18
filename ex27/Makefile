# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/14 22:22:03 by bepoisso          #+#    #+#              #
#    Updated: 2024/08/18 21:11:39 by bepoisso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR = ./srcs/
INC_DIR = ./includes/

SRCS =	$(SRC_DIR)gest_error.c \
		$(SRC_DIR)utiles.c
OBJS = $(SRCS:.c=.o)
HEADERS = $(INC_DIR)ft_utiles.h

WFLAGS = -Wall -Wextra -Werror
CC = gcc
LIB = libft.a
NAME = ft_display_file

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(WFLAGS) -o $(NAME) $(OBJS) main.c -g

%.o: %.c $(HEADERS)
	$(CC) $(WFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
