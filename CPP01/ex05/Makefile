# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/07 17:07:51 by ababouel          #+#    #+#              #
#    Updated: 2022/09/07 21:27:22 by ababouel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
BDIR = build
FILES = main classes/Harl
NAME = Harl
HEADERS = inc/Harl.h
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
