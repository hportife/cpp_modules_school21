NAME			= Interface_and_recap

SRCS			=	main.cpp\
					AMateria.cpp\
					Character.cpp\
					Cure.cpp\
					Ice.cpp\
					MateriaSource.cpp

OBJS			= $(SRCS:.cpp=.o)

CC				= c++
RM				= rm -f
FLG				= -Wall -Wextra -Werror

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(FLG) $(OBJS) -o $(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re