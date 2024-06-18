NAME = PhoneBook

CC = c++
FLAGS = -Wall -Wextra -Werror

SRC = PhoneBook.cpp Contact.cpp main.cpp
OBJ_DIR = obj

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $^

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	$(CC) $(FLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all