NAME		= 	zombie
CC			= 	clang++
RM			=	rm -f

SRC			= 	main.cpp\
				Zombie.cpp\
				newZombie.cpp\
				randomChump.cpp
OBJ			= 	$(SRC:%.cpp=%.o)
FLAGS		=	-Wall -Wextra -Werror -std=c++98 -pedantic
LIBS		=	-o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(LIBS) $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $(LIBS) $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all