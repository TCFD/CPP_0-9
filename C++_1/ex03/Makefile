# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/28 09:28:24 by rciaze            #+#    #+#              #
#    Updated: 2023/11/28 12:20:21 by rciaze           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	violence_inutile
CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g3
CC			=	c++ 
CLEANF 		=	@(rm -f *.o)
OBJ			=	$(addprefix obj/,${SRCS:.cpp=.o})

SRC			=	src/
# SRCS
SRCS		=	$(SRC)main.cpp \
				$(SRC)Weapon.cpp \
				$(SRC)HumanA.cpp \
				$(SRC)HumanB.cpp
				
# Couleurs
BOLD		=	"\033[1m"
RESET		=	"\033[0m"
LIGHT_GREEN	=	"\033[92m"
LIGHT_CYAN	=	"\033[96m"

all : $(NAME)

obj/%.o: %.cpp
	@mkdir -p $(dir $@)
	@echo $(BOLD)$(LIGHT_CYAN)Compiling $<... $(RESET)
	@${CC} ${CPPFLAGS} -c $< -o $@

$(NAME) : $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo $(BOLD)$(LIGHT_GREEN)$(NAME) is created !$(RESET)

clean :
	@$(CLEANF)
	@echo $(BOLD)$(LIGHT_GREEN).o deleted.$(RESET)
	@rm -rf obj/

fclean : clean
	@rm -f $(NAME)
	@echo $(BOLD)$(LIGHT_GREEN)$(NAME) deleted.$(RESET)

re : fclean all

.PHONY : all re clean fclean