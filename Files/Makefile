# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jemalhad <jemalhad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/13 19:34:17 by showner           #+#    #+#              #
#    Updated: 2017/10/03 01:58:46 by jemalhad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC= gcc
FLAGS=-Wall -Werror -Wextra
NAME = fillit
INCLUDE = ./includes/
SRC	= main.c ft_map.c ft_memalloc.c ft_memdel.c ft_memset.c ft_putchar.c \
		ft_putstr.c ft_resolve.c ft_sqrt.c ft_strclr.c ft_strlen.c \
		ft_strnew.c test_error.c ft_test_error_2.c read_file.c list.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "Done"

%.o: %.c
	@$(CC) $(FLAGS) -o $@ -c $<  -I $(INCLUDE)
	@echo "Updating $@ file"

clean:
	@rm -rf *.o
	@echo "Object files removed"

fclean: clean
	@rm -f $(NAME)
	@echo "Fillit binary removed"

re: fclean all


.PHONY: clean fclean re all
