# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/15 17:37:50 by xuwang            #+#    #+#              #
#    Updated: 2021/12/02 20:26:52 by xuwang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		= c++
CPPFLAGS 	= -Wall -Wextra -Werror -std=c++98

NAME 	:= Interface_recap
SRCS    := main.cpp \
			AMateria.cpp \
			MateriaSource.cpp \
			Character.cpp

OBJS := $(SRCS:%.cpp=%.o)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $@

all: $(NAME)

clean:	
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re