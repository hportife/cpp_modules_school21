NAME			= Mommy_when_I_grow_up_I_want_to_be_a_bureaucrat!

SRCS			=	main.cpp\
					Bureaucrat.cpp

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