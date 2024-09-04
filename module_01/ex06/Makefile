# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romlambe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/17 12:00:45 by romlambe          #+#    #+#              #
#    Updated: 2024/09/04 14:18:51 by romlambe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter
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
