SRC		=	$(wildcard *.cpp)		\
			$(wildcard src/*.cpp)

OBJ		=	$(SRC:.cpp=.o)

NAME	=	HashCode

LDFLAGS	= -Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
	g++ -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS) -std=c++17 -g
 
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(OBJ) $(NAME)

re:		fclean all

.Phony: all clean fclean re