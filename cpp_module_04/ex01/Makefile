NAME			=	I_don_t_want_to_set_the_world_on_fire

SRCS			=	main.cpp\
					Animal.cpp\
					Cat.cpp\
					Dog.cpp\
					WrongAnimal.cpp\
                    WrongCat.cpp\
                    Brain.cpp

OBJS			= $(SRCS:.cpp=.o)

CC				= c++
RM				= rm -f
FLG				= -Wall -Wextra -Werror -Wshadow

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(FLG) $(OBJS) -o $(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re