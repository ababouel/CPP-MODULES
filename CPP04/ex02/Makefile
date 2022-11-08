# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 17:30:51 by abdelghani        #+#    #+#              #
#    Updated: 2022/11/08 20:58:19 by ababouel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = C++ 
CFLAGS = -Wall -Werror -Wextra -std=c++98
BDIR = build
FILES = main classes/AAnimal classes/Cat classes/Dog classes/Brain classes/WrongCat classes/WrongAnimal
NAME = animal
HEADERS = inc/AAnimal.h inc/Cat.h inc/Dog.h inc/Brain.h inc/WrongCat.h inc/WrongAnimal.h
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