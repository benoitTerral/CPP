# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bterral <bterral@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/14 13:33:39 by bterral           #+#    #+#              #
#    Updated: 2022/07/28 12:47:18 by bterral          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				:= clang++

CFLAGS			:= -Wall -Wextra -Werror -std=c++98

NAME			:= ptr_ref

SRCS_DIR		:= ./srcs/

SRCS_FILES		:= main.cpp

SRCS			:= $(addprefix $(SRCS_DIR), $(SRCS_FILES))

OBJS_DIR		:= ./.objs/

LST_OBJS		:= $(SRCS_FILES:.cpp=.o)

OBJS			:= $(LST_OBJS)

# COMMANDS

all: $(NAME)

$(OBJS_DIR)%o: $(SRCS_DIR)%cpp Makefile
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean:
	rm -f $(NAME)

fclean: clean
	rm -rf $(OBJS_DIR)

re: fclean all

.PHONY: all clean fclean re
