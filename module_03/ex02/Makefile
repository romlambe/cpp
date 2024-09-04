# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romlambe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/29 12:36:27 by romlambe          #+#    #+#              #
#    Updated: 2024/09/04 14:27:01 by romlambe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fragtrap
AUTHOR = romlambe

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = src/main.cpp src/ClapTrap.cpp src/ScavTrap.cpp src/FragTrap.cpp
OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
		@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

all:$(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
