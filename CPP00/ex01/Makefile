# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bterral <bterral@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/14 13:33:39 by bterral           #+#    #+#              #
#    Updated: 2022/07/11 10:40:45 by bterral          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				:= clang++

CFLAGS			:= -Wall -Wextra -Werror -std=c++98

NAME			:= phonebook

SRCS_DIR		:= ./srcs/

SRCS_FILES		:= phonebook.cpp

SRCS			:= $(addprefix$(SRCS_DIR), $(SRCS_FILES))

LST_OBJS		:= $(SRCS_FILES:.cpp=.o)

OBJS_DIR		:= ./.objs/

OBJS			:= $(addprefix $(OBJS_DIR), $(LST_OBJS))

HEADERS_DIR		:= ./headers/

HEADERS_FILES	:= ex01.hpp Contact.hpp

HEADERS			:= $(addprefix $(HEADERS_DIR), $(HEADERS_FILES))

# COMMANDS

all: $(NAME)

$(OBJS_DIR)%o: $(SRCS_DIR)%cpp $(HEADERS) Makefile | $(OBJS_DIR)
	$(CC) $(CFLAGS) -I $(HEADERS_DIR) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $< -o $@

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

clean:
	rm -f $(NAME)

fclean: clean
	rm -rf $(OBJS_DIR)

re: fclean all

.PHONY: all clean fclean re
