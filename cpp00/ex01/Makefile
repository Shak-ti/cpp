SRC_DIR = src
SRCS = PhoneBook.class.cpp Contact.class.cpp main.cpp
SRCS := $(addprefix $(SRC_DIR)/, $(SRCS))
OBJ_DIR = obj
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))
DEPS = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.d, $(SRCS))

NAME = repertoire
COMPILE = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
INCLUDES = -I./inc

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(CPPFLAGS) $(OBJS) -o $(NAME) -g

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	mkdir -p $(OBJ_DIR)
	$(COMPILE) $(CPPFLAGS) $(INCLUDES) -MMD -MF $(@:.o=.d) -c $< -o $@ -g

-include $(DEPS)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean re clean
