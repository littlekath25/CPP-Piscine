NAME		= 	bureaucrat
CC			= 	clang++
RM			=	rm -f

SRC			= 	main.cpp\
				Bureaucrat.cpp\
				Form.cpp\
				ShrubberyCreationForm.cpp\
				RobotomyRequestForm.cpp\
				PresidentialPardonForm.cpp\
				Intern.cpp
OBJ			= 	$(SRC:%.cpp=%.o)
CREATIONS	=	*_shrubbery
FLAGS		=	-Wall -Wextra -Werror -std=c++98 -pedantic
LIBS		=	-o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(LIBS) $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $(LIBS) $@ $< -I inc

clean:
	$(RM) $(OBJ) $(CREATIONS)

fclean: clean
	$(RM) $(NAME)

re: fclean all