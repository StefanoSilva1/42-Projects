# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdavi-al <sdavi-al@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 17:48:35 by sdavi-al          #+#    #+#              #
#    Updated: 2024/11/08 12:57:44 by sdavi-al         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

# SRCS = ft_formatspc.c \
#         ft_printf.c \
#         ft_prints.c \
#         ft_prints2.c \

SRCS = $(shell find -name "*.c")

OBJ = $(SRCS:.c=.o)

# BONUS_OBJ = $(BONUS_SRCS:.c=.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
#  $(AR) $@ $^

# bonus: $(OBJ) $(BONUS_OBJ)
# 	$(AR) $(NAME) $(OBJ) $(BONUS_OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^ 
	$(AR) $(NAME) $@

clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
