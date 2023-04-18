# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/10 16:51:29 by blaurent          #+#    #+#              #
#    Updated: 2023/04/10 16:51:29 by blaurent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= zombieHorde
	
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
SRCDIR = ./
SRCNAMES = $(shell ls $(SRCDIR) | grep -E ".+\.c++")
SRC = $(addprefix $(SRCDIR), $(SRCNAMES))

BUILDDIR = ./build/
BUILDOBJS = $(addprefix $(BUILDDIR), $(SRCNAMES:.cpp=.o))

# Main rule
all: $(BUILDDIR) $(NAME)

# Object dir rule
$(BUILDDIR):
	mkdir -p $(BUILDDIR)

# Objects rule
$(BUILDDIR)%.o:$(SRCDIR)%.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

# Project file rule
$(NAME): $(BUILDOBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(BUILDOBJS)

clean:
	rm -rf $(BUILDDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean clean re