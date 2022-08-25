# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bterral <bterral@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/14 13:33:39 by bterral           #+#    #+#              #
#    Updated: 2022/08/25 15:55:40 by bterral          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				:= c++

CFLAGS			:= -Wall -Wextra -Werror -std=c++98

NAME			:= animal

WRONG_NAME		:= wrong_animal

SRCS_DIR		:= ./srcs/

WRONG_SRCS_DIR	:= ./wrong_srcs/

SRCS_FILES		:= animal.cpp dog.cpp cat.cpp main.cpp

SRCS			:= $(addprefix $(SRCS_DIR), $(SRCS_FILES))

WRONG_SRCS		:= $(addprefix $(WRONG_SRCS_DIR), $(SRCS_FILES))

OBJS_DIR		:= ./.objs/

WRONG_OBJS_DIR	:= ./.wrongObjs/

LST_OBJS		:= $(SRCS_FILES:.cpp=.o)

OBJS			:= $(addprefix $(OBJS_DIR), $(LST_OBJS))

WRONG_OBJS		:= $(addprefix $(WRONG_OBJS_DIR), $(LST_OBJS))

HEADERS_DIR		:= ./headers/

WRONG_HEADERS_DIR	:= ./wrong_headers/

HEADERS_FILES	:= animal.h Animal.hpp Cat.hpp Dog.hpp

HEADERS			:= $(addprefix $(HEADERS_DIR), $(HEADERS_FILES))

HEADERS			:= $(addprefix $(HEADERS_DIR), $(HEADERS_FILES))

# COMMANDS

all: $(NAME)

$(OBJS_DIR)%o: $(SRCS_DIR)%cpp $(HEADERS) Makefile | $(OBJS_DIR)
	$(CC) $(CFLAGS) -I $(HEADERS_DIR) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

clean:
	rm -f $(NAME)

fclean: clean
	rm -rf $(OBJS_DIR)

re: fclean $(OBJS_DIR) all

.PHONY: all clean fclean re
