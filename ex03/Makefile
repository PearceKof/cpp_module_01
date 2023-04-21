# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/11 15:55:21 by blaurent          #+#    #+#              #
#    Updated: 2023/04/11 15:55:21 by blaurent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= human
SRCS	= main.cpp HumanA.cpp HumanA.hpp HumanB.cpp HumanB.hpp Weapon.cpp Weapon.hpp
	
CC		= g++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

.PHONY: all clean re

all: $(NAME)

$(NAME): 
	@printf "$(CURSIVE)$(GRAY) 	- Compiling $(NAME)... $(RESET)\n"
	@ $(CC) $(FLAGS) $(SRCS) -o $(NAME)
	@printf "$(GREEN)    - Executable ready.\n$(RESET)"

clean:
	@$(RM) $(NAME)
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

fclean:
	@$(RM) $(NAME)
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

re: clean all