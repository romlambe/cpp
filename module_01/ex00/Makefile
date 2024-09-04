# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romlambe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/11 16:03:57 by romlambe          #+#    #+#              #
#    Updated: 2024/09/03 15:35:35 by romlambe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
AUTHOR = romlambe

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = src/Zombie.cpp src/main.cpp src/newZombie.cpp src/randomChump.cpp
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
