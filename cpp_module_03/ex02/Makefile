NAME			=	Repetitive_work

SRCS			=	main.cpp\
					ClapTrap.cpp\
					FragTrap.cpp\
					ScavTrap.cpp

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