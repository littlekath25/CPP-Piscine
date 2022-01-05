NAME		= 	amateria
CC			= 	clang++
RM			=	rm -f

SRC			= 	main.cpp\
				AMateria.cpp\
				Ice.cpp\
				Cure.cpp\
				ICharacter.cpp\
				Character.cpp
OBJ			= 	$(SRC:%.cpp=%.o)
FLAGS		=	-Wall -Wextra -Werror
LIBS		=	-o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(LIBS) $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $(LIBS) $@ $< -I inc

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all