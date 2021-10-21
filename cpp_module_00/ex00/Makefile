# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/12 18:06:34 by xuwang            #+#    #+#              #
#    Updated: 2021/10/15 18:56:12 by xuwang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC 		= clang++
CFLAGS 	= -Wall -Wextra -Werror -std=c++98

NAME 	:= megaphone
SRCS    := megaphone.cpp

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
	