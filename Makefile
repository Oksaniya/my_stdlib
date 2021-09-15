NAME = my_stdlib.a

CC = clang
FLAG = -c -o
TEST = my_test

all: obj
	$(CC) -o $(TEST) memset.o test_memset.o main.o -I my_stdlib.h

obj:
	$(CC) $(FLAG) memset.o source/memset.c -I header
	$(CC) $(FLAG) test_memset.o test/test_memset.c -I header
	$(CC) $(FLAG) main.o test/main.c -I header

run: re
	./$(TEST)

clean:
	rm -fr *.o

fclean: clean
	rm -fr $(TEST)

re: fclean all