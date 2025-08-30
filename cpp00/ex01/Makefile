# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/28 12:42:37 by seb               #+#    #+#              #
#    Updated: 2025/07/07 15:16:18 by sle-nogu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    := phoneBook
CC      := c++
CFLAGS  := -Wall -Wextra -Werror -std=c++98

SRC     := 	src/main.cpp \
			src/PhoneBook.cpp \
			src/Contact.cpp
			
OBJ_DIR := obj
OBJS    := $(SRC:%.cpp=$(OBJ_DIR)/%.o)

# Règles

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# Compile les .cpp en .o dans obj/
$(OBJ_DIR)/%.o: %.cpp
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re