# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 13:38:45 by vbaron            #+#    #+#              #
#    Updated: 2021/12/17 12:46:59 by vbaron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DIR_S = srcs/
DIR_O = objs

SOURCES =	main.cpp \


SRCS = $(addprefix $(DIR_S)/,$(SOURCES))
OBJS = $(addprefix $(DIR_O)/,$(SOURCES:.cpp=.o))
HEADERS = headers

NAME = filestream

CC = c++

CFLAGS = -I -Wall -Wextra -Werror -g3 -fsanitize=address

all: $(NAME)

$(DIR_O)/%.o: $(DIR_S)/%.cpp
	mkdir -p $(DIR_O)	
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $^ -o $@

clean:
		rm -f $(OBJS)		
	rm -f $(OBJS)/*.o
	rm -rf $(DIR_O)	

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re fclean all clean