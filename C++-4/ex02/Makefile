# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 12:41:45 by zbp15             #+#    #+#              #
#    Updated: 2023/11/22 16:01:18 by zbp15            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	ex01
CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g3
CC			=	c++ 
CLEANF 		=	@(rm -f *.o)
OBJ			=	${SRCS:.cpp=.o}

# SRCS
SRCS		=	main.cpp \
				Animal.cpp \
				WrongAnimal.cpp \
				Dog.cpp \
				WrongCat.cpp \
				Brain.cpp \
				Cat.cpp
# Couleurs
BOLD		=	"\033[1m"
RESET		=	"\033[0m"
LIGHT_GREEN	=	"\033[92m"
LIGHT_CYAN	=	"\033[96m"

all : $(NAME)

.cpp.o:
	@echo $(BOLD)$(LIGHT_CYAN)Compiling $<... $(RESET)
	@${CC} ${CPPFLAGS} -c $< -o ${<:.cpp=.o}

$(NAME) : $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo $(BOLD)$(LIGHT_GREEN)$(NAME) is created !$(RESET)

clean :
	@$(CLEANF)
	@echo $(BOLD)$(LIGHT_GREEN).o deleted.$(RESET)

fclean : clean
	@rm -f $(NAME)
	@echo $(BOLD)$(LIGHT_GREEN)$(NAME) deleted.$(RESET)

re : fclean all

.PHONY : all re clean fclean 
