# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grmortel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/25 14:29:35 by grmortel          #+#    #+#              #
#    Updated: 2023/03/01 11:23:36 by grmortel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
 
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJ = $(SRCS:.c=.o)

HEAD = includes/

CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJ)
		ar -rc $(NAME) $(OBJ)

.c.o:
		cc $(CFLAGS) -c -I $(HEAD) $< -o $(<:.c=.o)

all: $(NAME)

clean:
		rm -f $(OBJ) 

fclean: clean 
		rm -f $(NAME)

re :	fclean $(NAME) 

.PHONY: all clean fclean re
