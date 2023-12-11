# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 11:31:53 by jthuysba          #+#    #+#              #
#    Updated: 2023/12/11 12:26:43 by jthuysba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = template

SRCS_DIR	= ./
SRCS 		= 	main.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98

OBJS_DIR 	= 	objects/
OBJ 		= 	$(SRCS:.cpp=.o)
OBJS 		= 	$(addprefix $(OBJS_DIR), $(OBJ))

$(OBJS_DIR)%.o :	$(SRCS_DIR)%.cpp
	@mkdir -p $(OBJS_DIR)
	@c++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@echo "\033[34m|| Compiling..."
	@c++ $(FLAGS) -o $(NAME) $(OBJS)
	@echo "\033[32m|| OK"


all: $(NAME)

clean:
	@echo "\033[36m|| Cleaning objects..."
	@rm -rf $(OBJS_DIR)
	@echo "\033[32m|| OK"
	
fclean: clean
	@echo "\033[36m|| Cleaning all..."
	@rm -f $(NAME)
	@echo "\033[32m|| OK"

re: fclean all