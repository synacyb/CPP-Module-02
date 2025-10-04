NAME    = Harl
CPP     = c++
FLAGS   = -Wall -Wextra -Werror -std=c++98 
RM      = rm -rf


SRC  = main.cpp Harl.cpp

OBJ     = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(FLAGS) -o $(NAME) $(OBJ)
%.o: %.cpp
	$(CPP) $(FLAGS) -c $< -o $@
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:	clean
.SECONDARY: $(OBJ)