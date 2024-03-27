##
## EPITECH PROJECT, 2024
## jimmy
## File description:
## Makefile
##

SRC = main.c
SRC += $(wildcard src/*.c)

OBJ	= $(SRC:.c=.o)

TEST_SRC = ./src/palindrome.c
TEST_SRC += $(wildcard tests/*.c)

TEST_OBJ = $(TEST_SRC:.c=.o)

NAME = palindrome

TEST_NAME = unit_tests

CPPFLAGS = -I./lib/my
LDFLAGS = -L./lib/my -lmy -lcriterion

CC = gcc

all: $(NAME)

libmy:
	make -s -C lib/my

$(NAME):	libmy $(OBJ)
		gcc $(CPPFLAGS) -L./lib/my -o $(NAME) $(OBJ) -lmy -lcriterion

unit_tests:		CPPFLAGS +=--coverage
unit_tests:		$(TEST_OBJ)
	@	$(CC) -o $(TEST_NAME) $(TEST_OBJ) $(CPPFLAGS)

debug: 	CPPFLAGS +=-g3
debug: $(OBJ)
	$(MAKE)-C lib/my
	$(CC)-o $(NAME) $(OBJ) -lmy

clean:
	rm $(OBJ)
	find -name "*.o" -delete

fclean: clean
	rm -f $(NAME)
	find -name "*.a" -delete
	find -name "vgcore*" -delete
	find -name "*.o" -delete

re:fclean all

.PHONY: re all fclean clean unit_tests
