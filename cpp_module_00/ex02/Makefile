# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/21 13:59:00 by xuwang            #+#    #+#              #
#    Updated: 2021/10/21 13:59:28 by xuwang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		= clang++
CFLAGS 	= -Wall -Wextra -Werror -std=c++98

NAME 	:= book
SRCS    := Account.cpp \
			tests.cpp \

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