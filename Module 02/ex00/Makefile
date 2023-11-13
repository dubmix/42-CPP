# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 06:52:06 by pdelanno          #+#    #+#              #
#    Updated: 2023/09/11 08:22:16 by pdelanno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Fixed.cpp

OBJS = $(SRC:.cpp=.o)

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

COMP = g++

NAME = fixed

all: $(NAME)

$(NAME): $(OBJS)
		@$(COMP) $(CPPFLAGS) $(OBJS) -o $(NAME)
		@echo "\033[1;5mProgram is ready!\033[0m"
clean:
		@rm -f $(OBJS)

fclean: clean
		@rm -f $(NAME)
		@echo "\033[1mAll clean!\033[0m"

re: fclean all

.PHONY: all clean fclean re