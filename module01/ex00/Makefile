# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romlambe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/11 16:03:57 by romlambe          #+#    #+#              #
#    Updated: 2024/07/11 16:05:03 by romlambe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
AUTHOR = romlambe

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp
OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
		@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
