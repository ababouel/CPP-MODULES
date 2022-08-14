# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/14 19:40:51 by ababouel          #+#    #+#              #
#    Updated: 2022/08/14 19:55:13 by ababouel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = C++ 
CFLAGS = -Wall -Wextra -Werror -std=c++98
BDIR = build
FILES = main
NAME = reference
OBJ = $(addprefix $(BDIR)/, $(FILES:=.o))

all: $(NAME)

$(NAME): $(OBJ)
		@$(CC) $(CFLAGS) $^ -o $@

$(BDIR)/%.o : %.cpp
		@mkdir -p $(@D)
		@$(CC) $(CFLAGS) -c $< -o $@ 

clean: 
		rm -rf $(BDIR)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY : re all clean fclean