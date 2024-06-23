NAME = fixed

CC = c++
# FLAGS = -Wall -Wextra -Werror
OBJ_DIR = obj/
SRCS = $(wildcard *.cpp)
OBJS = $(addprefix $(OBJ_DIR), $(SRCS:.cpp=.o))

all: $(OBJ_DIR) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $^

$(OBJ_DIR)%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all