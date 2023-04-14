# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/04 16:12:09 by ababouel          #+#    #+#              #
#    Updated: 2023/04/14 02:04:37 by ababouel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = C++
CFLAGS = -Wall -Werror -Wextra -std=c++98
BDIR = build
FILES = main RPN
NAME = RPN
HEADERS = RPN.hpp
OBJ = $(addprefix $(BDIR)/, $(FILES:=.o))

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $^ -o $@

$(BDIR)/%.o : %.cpp $(HEADERS)
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@ -I ./inc

clean:
	rm -rf build

re: fclean all

fclean: clean
	rm -rf RPN

.PHONY: re all clean fclean