# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/14 22:22:03 by bepoisso          #+#    #+#              #
#    Updated: 2024/08/14 22:58:16 by bepoisso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR = ./srcs/
INC_DIR = ./includes/

SRCS = $(SRC_DIR)ft_putchar.c \
		$(SRC_DIR)ft_putstr.c \
		$(SRC_DIR)ft_strcmp.c \
		$(SRC_DIR)ft_strlen.c \
		$(SRC_DIR)ft_swap.c
OBJS = $(SRCS:.c=.o)
HEADERS = $(INC_DIR)ft.h

WFLAGS = -Wall -Wextra -Werror
CC = gcc

LIB = libft.a

all: $(LIB)

$(LIB): $(OBJS)
	ar rc $(LIB) $(OBJS)
	ranlib $(LIB)

%.o: %.c $(HEADERS)
	$(CC) $(WFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(LIB)

re: fclean all

.PHONY: all clean fclean re
