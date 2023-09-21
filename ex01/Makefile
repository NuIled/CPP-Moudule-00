# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 02:06:32 by aoutifra          #+#    #+#              #
#    Updated: 2023/09/21 02:07:33 by aoutifra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = PhoneBook

SRC = PhoneBook.cpp Contact.cpp

Obj = $(SRC:.cpp=.o)

FLAGS= -Wall -Wextra -Werror 

HEADER = PhoneBook.hpp Contact.hpp

CC = clang++

all : $(NAME)

$(NAME): $(Obj)
	$(CC) $(FLAGS) $(Obj) -o $(NAME)  

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

re:fclean all

clean:
	rm -rf $(Obj)

fclean:clean
	rm -rf $(NAME)

.PHONY:
	clean fclean all