# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/18 16:09:12 by xuwang            #+#    #+#              #
#    Updated: 2021/11/18 16:09:14 by xuwang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC 		= clang++
CFLAGS 	= -Wall -Wextra -Werror -std=c++98

NAME 	:= Form
SRCS    := main.cpp \
			Bureaucrat.cpp \
			Form.cpp

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