# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bterral <bterral@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/14 13:33:39 by bterral           #+#    #+#              #
#    Updated: 2022/06/14 13:43:45 by bterral          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= clang++

CFLAGS		= -Wall -Wextra -Werror -std=c++98

NAME		= megaphone

SRCS		= megaphone.cpp

# COMMANDS

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm $(NAME)

fclean: clean
	rm -rf $(OBJS_DIR)

re: flcean all

.PHONY: all clean fclean re
