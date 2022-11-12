# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 14:32:27 by ababouel          #+#    #+#              #
#    Updated: 2022/11/12 16:51:50 by ababouel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = C++ 
CFLAGS = -Wall -Werror -Wextra -std=c++98
BDIR = build
FILES = main classes/Bureaucrat classes/Form classes/PresidentialPardonForm classes/RobotomyRequestForm classes/ShrubberyCreationForm
NAME = bureaucrat
HEADERS = inc/Bureaucrat.h inc/Form.hpp inc/PresidentialPardonForm.h inc/RobotomyRequestForm.h inc/ShrubberyCreationForm.h
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