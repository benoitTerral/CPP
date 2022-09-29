# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bterral <bterral@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/14 13:33:39 by bterral           #+#    #+#              #
#    Updated: 2022/09/29 14:32:47 by bterral          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				:= c++

CFLAGS			:= -Wall -Wextra -Werror -std=c++98

NAME			:= bureaucrat

SRCS_DIR		:= ./srcs/

SRCS_FILES		:= Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp main.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

SRCS			:= $(addprefix $(SRCS_DIR), $(SRCS_FILES))

OBJS_DIR		:= ./.objs/

LST_OBJS		:= $(SRCS_FILES:.cpp=.o)

OBJS			:= $(addprefix $(OBJS_DIR), $(LST_OBJS))

HEADERS_DIR		:= ./headers/

HEADERS_FILES	:= Bureaucrat.h Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp  RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp

HEADERS			:= $(addprefix $(HEADERS_DIR), $(HEADERS_FILES))

# COMMANDS

all: $(NAME)

$(OBJS_DIR)%o: $(SRCS_DIR)%cpp $(HEADERS) Makefile | $(OBJS_DIR)
	$(CC) $(CFLAGS) -I $(HEADERS_DIR) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(WRONG_OBJS_DIR):
	mkdir -p $(WRONG_OBJS_DIR)

clean:
	rm -f $(NAME)

fclean: clean
	rm -rf $(OBJS_DIR)

re: fclean $(OBJS_DIR) all

.PHONY: all clean fclean re
