# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/30 08:51:25 by mkaraden          #+#    #+#              #
#    Updated: 2023/11/30 09:49:50 by mkaraden         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= mySed

FILE = deneme

TEXT2 = karpuz meybuz karpuzkarpuz meybuzmeybuz meybuz karpuz karpuz\
	meybuzkarpuz karpuz meybuz meybuz karpuz karpuz meybuz meybuz\
	bbbb

define TEXT
	karpuz meybuz karpuzkarpuz meybuzmeybuz meybuz karpuz karpuz\
	meybuzkarpuz karpuz meybuz meybuz karpuz karpuz meybuz meybuz\
	bbbb
endef

	
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

OBJDIR = .objFiles

FILES		= main mySed

SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= mySed.hpp 


#Debug "$$TEXT"
ifeq ($(DEBUG), 1)
   OPTS = -g
endif

.PHONY: all clean fclean re bonus norm

all: $(NAME)

$(NAME): $(OBJ) $(HEADER) $(FILE)
	@$(CC) $(OBJ) $(OPTS) -o $(NAME)
	@printf "$(_SUCCESS) $(GREEN)- Executable ready.\n$(RESET)"

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) $(OPTS) -c $< -o $@

$(FILE):
	@touch $(FILE)
	printf "$(TEXT2)" > $(FILE) 

clean:
	@$(RM) $(OBJDIR) $(OBJ) $(FILE) $(FILE).replace
	@printf "$(YELLOW)    - Object files removed.$(RESET)\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

re: fclean all