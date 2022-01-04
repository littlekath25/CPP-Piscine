NAME		= 	diamondtrap
CC			= 	clang++
RM			=	rm -f

SRC			= 	main.cpp\
				ClapTrap.cpp\
				ScavTrap.cpp\
				FragTrap.cpp\
				DiamondTrap.cpp
OBJ			= 	$(SRC:%.cpp=%.o)
FLAGS		=	-Wall -Wextra -Werror -Wshadow -Wno-shadow
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