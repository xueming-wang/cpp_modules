# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/25 12:31:09 by xuwang            #+#    #+#              #
#    Updated: 2021/11/25 12:32:54 by xuwang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		= clang++
CFLAGS 	= -Wall -Wextra -Werror -std=c++98

NAME 	:= 
SRCS    := main.cpp \
			whatever.hpp
			
OBJS := $(SRCS:%.cpp=%.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

all: $(NAME)

clean:	
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re