# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sconiat <sconiat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/07 13:12:55 by sconiat           #+#    #+#              #
#    Updated: 2025/04/07 13:12:56 by sconiat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp 
OBJ_DIR = obj
OBJS = $(patsubst %.cpp, $(OBJ_DIR)/%.o, $(SRCS))
DEPS = $(patsubst %.cpp, $(OBJ_DIR)/%.d, $(SRCS))

NAME = replace
COMPILE = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(CPPFLAGS) $(OBJS) -o $(NAME) -g

$(OBJ_DIR)/%.o: %.cpp
	mkdir -p $(OBJ_DIR)
	$(COMPILE) $(CPPFLAGS) -MMD -MF $(@:.o=.d) -c $< -o $@ -g

-include $(DEPS)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean re clean
