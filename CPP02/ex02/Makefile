# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/14 16:02:01 by ababouel          #+#    #+#              #
#    Updated: 2022/09/12 19:28:15 by ababouel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = C++ 
CFLAGS = -Wall -Werror -Wextra -std=c++98 -g
BDIR = build
FILES = main classes/Fixed 
NAME = fixed
HEADERS = inc/Fixed.h 
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

.PHONY : re all clean fclean%  