# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/14 22:22:03 by bepoisso          #+#    #+#              #
#    Updated: 2024/08/17 22:09:42 by bepoisso         ###   ########.fr        #
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
EXEC = ft_display_file

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(WFLAGS) -o $(EXEC) $(OBJS) main.c -g

%.o: %.c $(HEADERS)
	$(CC) $(WFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re
