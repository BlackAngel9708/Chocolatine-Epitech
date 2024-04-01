##
## EPITECH PROJECT, 2023
## stumpers
## File description:
## Makefile
##



SRC 	=	src/main.c \
			src/utils.c \
			src/swapupcase.c

TESTS_SRC 	=	src/utils.c \
				src/swapupcase.c

OBJ 	=	$(SRC:.c=.o)

NAME 	=	swapupcase

CPPFLAGS	=	-I./include

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)

debug:
		gcc -o $(NAME) $(SRC) $(CPPFLAGS) -ggdb3

compile_tests:
		gcc -o unit_testing $(TESTS_SRC) tests/unit_tests.c \
		$(CPPFLAGS) --coverage -lcriterion
		gcc -o integration_testing $(TESTS_SRC) tests/integration_tests.c \
		$(CPPFLAGS) --coverage -lcriterion

tests_run:	compile_tests
		./unit_testing
		./integration_testing

tests:	tests_run
		gcovr --exclude tests/
		gcovr --exclude tests/ --branches

clean:
	find -name "*.o" -delete
	find -name "*.gc*" -delete

fclean:	clean
	rm -f $(NAME) unit_testing integration_testing

re:	fclean all

.PHONY: all clean fclean re tests tests_run debug
