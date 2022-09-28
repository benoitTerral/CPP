# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bterral <bterral@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/14 13:33:39 by bterral           #+#    #+#              #
#    Updated: 2022/09/28 10:02:51 by bterral          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC						:= c++

CFLAGS					:= -Wall -Wextra -Werror -std=c++98

NAME					:= animal

WRONG_NAME				:= wrong_animal

SRCS_DIR				:= ./srcs/

WRONG_SRCS_DIR			:= ./wrong_srcs/

SRCS_FILES				:= Animal.cpp Dog.cpp Cat.cpp main.cpp

WRONG_SRCS_FILES		:= WrongAnimal.cpp WrongCat.cpp main.cpp

SRCS					:= $(addprefix $(SRCS_DIR), $(SRCS_FILES))

WRONG_SRCS				:= $(addprefix $(WRONG_SRCS_DIR), $(WRONG_SRCS_FILES))

OBJS_DIR				:= ./.objs/

WRONG_OBJS_DIR			:= ./.wrongObjs/

LST_OBJS				:= $(SRCS_FILES:.cpp=.o)

WRONG_LST_OBJS			:= $(WRONG_SRCS_FILES:.cpp=.o)

OBJS					:= $(addprefix $(OBJS_DIR), $(LST_OBJS))

WRONG_OBJS				:= $(addprefix $(WRONG_OBJS_DIR), $(WRONG_LST_OBJS))

HEADERS_DIR				:= ./headers/

WRONG_HEADERS_DIR		:= ./wrong_headers/

HEADERS_FILES			:= Animal.h Animal.hpp Cat.hpp Dog.hpp

WRONG_HEADERS_FILES		:= WrongAnimal.h WrongAnimal.hpp WrongCat.hpp

HEADERS					:= $(addprefix $(HEADERS_DIR), $(HEADERS_FILES))

WRONG_HEADERS			:= $(addprefix $(WRONG_HEADERS_DIR), $(WRONG_HEADERS_FILES))

# COMMANDS

all: $(NAME)

wrong: $(WRONG_NAME)

$(OBJS_DIR)%o: $(SRCS_DIR)%cpp $(HEADERS) Makefile | $(OBJS_DIR)
	$(CC) $(CFLAGS) -I $(HEADERS_DIR) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(WRONG_OBJS_DIR)%o: $(WRONG_SRCS_DIR)%cpp $(WRONG_HEADERS) Makefile | $(WRONG_OBJS_DIR)
	$(CC) $(CFLAGS) -I $(WRONG_HEADERS_DIR) -c $< -o $@

$(WRONG_NAME): $(WRONG_OBJS)
	$(CC) $(CFLAGS) $(WRONG_OBJS) -o $@

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(WRONG_OBJS_DIR):
	mkdir -p $(WRONG_OBJS_DIR)

clean:
	rm -f $(NAME)
	rm -f $(WRONG_NAME)

fclean: clean
	rm -rf $(OBJS_DIR)
	rm -rf $(WRONG_OBJS_DIR)

re: fclean $(OBJS_DIR) all

.PHONY: all clean fclean re wrong
