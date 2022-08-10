# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/03 16:04:53 by ababouel          #+#    #+#              #
#    Updated: 2022/08/09 22:06:27 by ababouel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = C++ 
CFLAGS = -Wall -Werror -Wextra -std=c++98
BDIR = build
FILES = main classes/Phonebook classes/Contact 
NAME = phonebook
HEADERS = inc/Contact.hpp inc/Phonebook.hpp 
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