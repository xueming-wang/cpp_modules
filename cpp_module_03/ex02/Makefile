# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 17:26:29 by xuwang            #+#    #+#              #
#    Updated: 2021/12/01 18:57:26 by xuwang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC 		= clang++
CPPFLAGS 	= -Wall -Wextra -Werror -std=c++98

NAME 	:= FragTrap
SRCS    := main.cpp \
			ClapTrap.cpp\
			ScavTrap.cpp\
			FragTrap.cpp

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