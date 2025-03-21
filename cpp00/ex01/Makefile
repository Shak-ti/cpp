SRCS = PhoneBook.cpp Contact.cpp main.cpp
NAME = repertoire
COMPILE = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
	$(COMPILE) $(CPPFLAGS) $(SRCS) -o $(NAME) -g

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean re
