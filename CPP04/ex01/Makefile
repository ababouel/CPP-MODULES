# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdelghani <abdelghani@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 17:30:51 by abdelghani        #+#    #+#              #
#    Updated: 2022/10/31 18:17:52 by abdelghani       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = C++ 
CFLAGS = -Wall -Werror -Wextra -std=c++98
BDIR = build
FILES = main classes/Animal classes/Cat classes/Dog
NAME = animal
HEADERS = inc/Animal.h inc/Cat.h inc/Dog.h
OBJ = $(addprefix $(BDIR)/, $(FILES:=.o))

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $^ -o $@
	
$(BDIR)/%.o : %.cpp $(HEADERS)
		@mkdir -p $(@D)
		@$(CC) $(CFLAGS) -c $< -o $@ -I ./inc
         
clean:
		rm -rf build

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY : re all clean fclean 