# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romlambe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/16 16:26:58 by romlambe          #+#    #+#              #
#    Updated: 2024/09/04 14:18:16 by romlambe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl
AUTHOR = romlambe

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = src/main.cpp src/Harl.cpp
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
