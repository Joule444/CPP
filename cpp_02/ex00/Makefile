# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jthuysba <jthuysba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 11:31:53 by jthuysba          #+#    #+#              #
#    Updated: 2023/10/05 16:58:09 by jthuysba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = HarlFilter

SRCS_DIR	= ./
SRCS 		= 	main.cpp Harl.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJS_DIR 	= 	objects/
OBJ 		= 	$(SRCS:.cpp=.o)
OBJS 		= 	$(addprefix $(OBJS_DIR), $(OBJ))

$(OBJS_DIR)%.o :	$(SRCS_DIR)%.cpp
	@mkdir -p $(OBJS_DIR)
	@c++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@echo "\033[34mCompiling..."
	@c++ $(FLAGS) -o $(NAME) $(OBJS)
	@echo "\033[32mOK"


all: $(NAME)

clean:
	@echo "\033[36mCleaning objects..."
	@rm -rf $(OBJS_DIR)
	@echo "\033[32mOK"
	
fclean: clean
	@echo "\033[36mCleaning all..."
	@rm -f $(NAME)
	@echo "\033[32mOK"

re: fclean all