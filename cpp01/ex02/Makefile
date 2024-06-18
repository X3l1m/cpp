# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: seyildir <seyildir@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/06/18 18:33:35 by seyildir      #+#    #+#                  #
#    Updated: 2024/06/18 18:33:35 by seyildir      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = thisIsBrain

CC = c++
FLAGS = -Wall -Wextra -Werror
SRCS = mian.cpp
OBJS = main.o

all: $(OBJ_DIR) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $^

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all