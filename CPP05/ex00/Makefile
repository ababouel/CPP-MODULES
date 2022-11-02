# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ababouel <ababouel@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 14:32:27 by ababouel          #+#    #+#              #
#    Updated: 2022/11/02 14:33:41 by ababouel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = C++ 
CFLAGS = -Wall -Werror -Wextra -std=c++98
BDIR = build
FILES = main classes/Bureaucrat
NAME = animal
HEADERS = inc/Bureaucrat.h
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