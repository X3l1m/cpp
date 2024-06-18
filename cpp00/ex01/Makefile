# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: seyildir <seyildir@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/06/18 15:29:16 by seyildir      #+#    #+#                  #
#    Updated: 2024/06/18 15:29:16 by seyildir      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

CC = c++
FLAGS = -Wall -Wextra -Werror

SRC = PhoneBook.cpp Contact.cpp main.cpp
OBJ_DIR = obj

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

all: $(OBJ_DIR) $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $^

$(OBJ_DIR)/%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all