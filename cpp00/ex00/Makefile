# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: seyildir <seyildir@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/06/18 15:27:28 by seyildir      #+#    #+#                  #
#    Updated: 2024/06/18 15:27:28 by seyildir      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

FLAGS = -Wall -Wextra -Werror -std=c++11

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all