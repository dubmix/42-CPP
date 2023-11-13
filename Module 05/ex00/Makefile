# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/28 08:44:23 by pdelanno          #+#    #+#              #
#    Updated: 2023/09/28 08:44:46 by pdelanno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Bureaucrat.cpp

OBJS = $(SRC:.cpp=.o)

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

COMP = c++

NAME = bureaucrat

all: $(NAME)

$(NAME): $(OBJS)
		@$(COMP) $(CPPFLAGS) -o $(NAME) $(OBJS)
		@echo "\033[1;5mProgram is ready!\033[0m"
clean:
		@rm -f $(OBJS)

fclean: clean
		@rm -f $(NAME)
		@echo "\033[1mAll clean!\033[0m"

re: fclean all

.PHONY: all clean fclean re