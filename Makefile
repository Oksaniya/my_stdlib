NAME = my_stdlib.a

CC = clang
FLAG = -c -o
TEST = my_test
OBJ = ft_memset.o \
	ft_bzero.o \
	print_mem.o \
	ft_memcpy.o \
	ft_memccpy.o \
	ft_memmove.o \
	ft_memcmp.o \
	ft_strlen.o \
	ft_memchr.o \
	ft_strdup.o \
	ft_strcpy.o \
	ft_strncpy.o \
	ft_strcat.o \
	ft_strncat.o \
	ft_strlcat.o \
	ft_strchr.o \
	ft_strrchr.o \
	ft_strstr.o \
	ft_strnstr.o \
	ft_strcmp.o \
	ft_strncmp.o \
	ft_atoi.o \
	ft_isalpha.o \
	ft_isdigit.o \
	ft_isalnum.o \
	ft_isascii.o \
	ft_isprint.o \
	ft_toupper.o \
	ft_tolower.o \
	ft_memalloc.o \
	ft_memdel.o \
	ft_strnew.o \
	ft_strdel.o \
	ft_strclr.o \
	ft_striter.o \
	ft_striteri.o \
	ft_strmap.o \
	ft_strmapi.o \
	ft_strequ.o \
	ft_strnequ.o \
	ft_strsub.o \
	ft_strjoin.o \
	ft_strtrim.o \
	ft_strsplit.o \
	ft_itoa.o \
	ft_putchar.o \
	ft_putstr.o \
	ft_putendl.o \
	ft_putnbr.o \
	ft_putchar_fd.o \
	ft_putstr_fd.o \
	ft_putendl_fd.o \
	ft_putnbr_fd.o \
	ft_lstnew.o \
	ft_lstdelone.o \
	ft_lstdel.o \
	ft_lstadd.o \
	ft_lstiter.o \
	ft_lstmap.o

all: obj
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	@echo "\033[0;32mLibrary compiled : \033[0m\033[31m$(NAME)\033[0m"

obj:
	$(CC) $(FLAG) ft_memset.o source/ft_memset.c -I header
	$(CC) $(FLAG) ft_bzero.o source/ft_bzero.c -I header
	$(CC) $(FLAG) print_mem.o source/print_mem.c -I header
	$(CC) $(FLAG) ft_memcpy.o source/ft_memcpy.c -I header
	$(CC) $(FLAG) ft_memccpy.o source/ft_memccpy.c -I header
	$(CC) $(FLAG) ft_memmove.o source/ft_memmove.c -I header
	$(CC) $(FLAG) ft_memcmp.o source/ft_memcmp.c -I header
	$(CC) $(FLAG) ft_strlen.o source/ft_strlen.c -I header
	$(CC) $(FLAG) ft_memchr.o source/ft_memchr.c -I header
	$(CC) $(FLAG) ft_strdup.o source/ft_strdup.c -I header
	$(CC) $(FLAG) ft_strcpy.o source/ft_strcpy.c -I header
	$(CC) $(FLAG) ft_strncpy.o source/ft_strncpy.c -I header
	$(CC) $(FLAG) ft_strcat.o source/ft_strcat.c -I header
	$(CC) $(FLAG) ft_strncat.o source/ft_strncat.c -I header
	$(CC) $(FLAG) ft_strlcat.o source/ft_strlcat.c -I header
	$(CC) $(FLAG) ft_strchr.o source/ft_strchr.c -I header
	$(CC) $(FLAG) ft_strrchr.o source/ft_strrchr.c -I header
	$(CC) $(FLAG) ft_strstr.o source/ft_strstr.c -I header
	$(CC) $(FLAG) ft_strnstr.o source/ft_strnstr.c -I header
	$(CC) $(FLAG) ft_strcmp.o source/ft_strcmp.c -I header
	$(CC) $(FLAG) ft_strncmp.o source/ft_strncmp.c -I header
	$(CC) $(FLAG) ft_atoi.o source/ft_atoi.c -I header
	$(CC) $(FLAG) ft_isalpha.o source/ft_isalpha.c -I header
	$(CC) $(FLAG) ft_isdigit.o source/ft_isdigit.c -I header
	$(CC) $(FLAG) ft_isalnum.o source/ft_isalnum.c -I header
	$(CC) $(FLAG) ft_isascii.o source/ft_isascii.c -I header
	$(CC) $(FLAG) ft_isprint.o source/ft_isprint.c -I header
	$(CC) $(FLAG) ft_toupper.o source/ft_toupper.c -I header
	$(CC) $(FLAG) ft_tolower.o source/ft_tolower.c -I header
	$(CC) $(FLAG) ft_memalloc.o source/ft_memalloc.c -I header
	$(CC) $(FLAG) ft_memdel.o source/ft_memdel.c -I header
	$(CC) $(FLAG) ft_strnew.o source/ft_strnew.c -I header
	$(CC) $(FLAG) ft_strdel.o source/ft_strdel.c -I header
	$(CC) $(FLAG) ft_strclr.o source/ft_strclr.c -I header
	$(CC) $(FLAG) ft_striter.o source/ft_striter.c -I header
	$(CC) $(FLAG) ft_striteri.o source/ft_striteri.c -I header
	$(CC) $(FLAG) ft_strmap.o source/ft_strmap.c -I header
	$(CC) $(FLAG) ft_strmapi.o source/ft_strmapi.c -I header
	$(CC) $(FLAG) ft_strequ.o source/ft_strequ.c -I header
	$(CC) $(FLAG) ft_strnequ.o source/ft_strnequ.c -I header
	$(CC) $(FLAG) ft_strsub.o source/ft_strsub.c -I header
	$(CC) $(FLAG) ft_strjoin.o source/ft_strjoin.c -I header
	$(CC) $(FLAG) ft_strtrim.o source/ft_strtrim.c -I header
	$(CC) $(FLAG) ft_strsplit.o source/ft_strsplit.c -I header
	$(CC) $(FLAG) ft_itoa.o source/ft_itoa.c -I header
	$(CC) $(FLAG) ft_putchar.o source/ft_putchar.c -I header
	$(CC) $(FLAG) ft_putstr.o source/ft_putstr.c -I header
	$(CC) $(FLAG) ft_putendl.o source/ft_putendl.c -I header
	$(CC) $(FLAG) ft_putnbr.o source/ft_putnbr.c -I header
	$(CC) $(FLAG) ft_putchar_fd.o source/ft_putchar_fd.c -I header
	$(CC) $(FLAG) ft_putstr_fd.o source/ft_putstr_fd.c -I header
	$(CC) $(FLAG) ft_putendl_fd.o source/ft_putendl_fd.c -I header
	$(CC) $(FLAG) ft_putnbr_fd.o source/ft_putnbr_fd.c -I header
	$(CC) $(FLAG) ft_lstnew.o source/ft_lstnew.c -I header
	$(CC) $(FLAG) ft_lstdelone.o source/ft_lstdelone.c -I header
	$(CC) $(FLAG) ft_lstdel.o source/ft_lstdel.c -I header
	$(CC) $(FLAG) ft_lstadd.o source/ft_lstadd.c -I header
	$(CC) $(FLAG) ft_lstiter.o source/ft_lstiter.c -I header
	$(CC) $(FLAG) ft_lstmap.o source/ft_lstmap.c -I header

test_obj:
	$(CC) $(FLAG) main.o test/main.c -I header
	$(CC) $(FLAG) test_ft_memset.o test/test_ft_memset.c -I header
	$(CC) $(FLAG) test_ft_bzero.o test/test_ft_bzero.c -I header
	$(CC) $(FLAG) test_print_mem.o test/test_print_mem.c -I header
	$(CC) $(FLAG) test_ft_memcpy.o test/test_ft_memcpy.c -I header
	$(CC) $(FLAG) test_ft_memccpy.o test/test_ft_memccpy.c -I header
	$(CC) $(FLAG) test_ft_memmove.o test/test_ft_memmove.c -I header
	$(CC) $(FLAG) test_ft_memcmp.o test/test_ft_memcmp.c -I header
	$(CC) $(FLAG) test_ft_strlen.o test/test_ft_strlen.c -I header
	$(CC) $(FLAG) test_ft_memchr.o test/test_ft_memchr.c -I header
	$(CC) $(FLAG) test_ft_strdup.o test/test_ft_strdup.c -I header
	$(CC) $(FLAG) test_ft_strcpy.o test/test_ft_strcpy.c -I header
	$(CC) $(FLAG) test_ft_strncpy.o test/test_ft_strncpy.c -I header
	$(CC) $(FLAG) test_ft_strcat.o test/test_ft_strcat.c -I header
	$(CC) $(FLAG) test_ft_strncat.o test/test_ft_strncat.c -I header
	$(CC) $(FLAG) test_ft_strlcat.o test/test_ft_strlcat.c -I header
	$(CC) $(FLAG) test_ft_strchr.o test/test_ft_strchr.c -I header
	$(CC) $(FLAG) test_ft_strrchr.o test/test_ft_strrchr.c -I header
	$(CC) $(FLAG) test_ft_strstr.o test/test_ft_strstr.c -I header
	$(CC) $(FLAG) test_ft_strnstr.o test/test_ft_strnstr.c -I header
	$(CC) $(FLAG) test_ft_strcmp.o test/test_ft_strcmp.c -I header
	$(CC) $(FLAG) test_ft_strncmp.o test/test_ft_strncmp.c -I header
	$(CC) $(FLAG) test_ft_atoi.o test/test_ft_atoi.c -I header
	$(CC) $(FLAG) test_ft_isalpha.o test/test_ft_isalpha.c -I header
	$(CC) $(FLAG) test_ft_isdigit.o test/test_ft_isdigit.c -I header
	$(CC) $(FLAG) test_ft_isalnum.o test/test_ft_isalnum.c -I header
	$(CC) $(FLAG) test_ft_isascii.o test/test_ft_isascii.c -I header
	$(CC) $(FLAG) test_ft_isprint.o test/test_ft_isprint.c -I header
	$(CC) $(FLAG) test_ft_toupper.o test/test_ft_toupper.c -I header
	$(CC) $(FLAG) test_ft_tolower.o test/test_ft_tolower.c -I header
	$(CC) $(FLAG) test_ft_memalloc.o test/test_ft_memalloc.c -I header
	$(CC) $(FLAG) test_ft_memdel.o test/test_ft_memdel.c -I header
	$(CC) $(FLAG) test_ft_strnew.o test/test_ft_strnew.c -I header
	$(CC) $(FLAG) test_ft_strdel.o test/test_ft_strdel.c -I header
	$(CC) $(FLAG) test_ft_strclr.o test/test_ft_strclr.c -I header
	$(CC) $(FLAG) test_ft_striter.o test/test_ft_striter.c -I header
	$(CC) $(FLAG) test_ft_striteri.o test/test_ft_striteri.c -I header
	$(CC) $(FLAG) test_ft_strmap.o test/test_ft_strmap.c -I header
	$(CC) $(FLAG) test_ft_strmapi.o test/test_ft_strmapi.c -I header
	$(CC) $(FLAG) test_ft_strequ.o test/test_ft_strequ.c -I header
	$(CC) $(FLAG) test_ft_strnequ.o test/test_ft_strnequ.c -I header
	$(CC) $(FLAG) test_ft_strsub.o test/test_ft_strsub.c -I header
	$(CC) $(FLAG) test_ft_strjoin.o test/test_ft_strjoin.c -I header
	$(CC) $(FLAG) test_ft_strtrim.o test/test_ft_strtrim.c -I header
	$(CC) $(FLAG) test_ft_strsplit.o test/test_ft_strsplit.c -I header
	$(CC) $(FLAG) test_ft_itoa.o test/test_ft_itoa.c -I header
	$(CC) $(FLAG) test_ft_putchar.o test/test_ft_putchar.c -I header
	$(CC) $(FLAG) test_ft_putstr.o test/test_ft_putstr.c -I header
	$(CC) $(FLAG) test_ft_putendl.o test/test_ft_putendl.c -I header
	$(CC) $(FLAG) test_ft_putnbr.o test/test_ft_putnbr.c -I header
	$(CC) $(FLAG) test_ft_putchar_fd.o test/test_ft_putchar_fd.c -I header
	$(CC) $(FLAG) test_ft_putstr_fd.o test/test_ft_putstr_fd.c -I header
	$(CC) $(FLAG) test_ft_putendl_fd.o test/test_ft_putendl_fd.c -I header
	$(CC) $(FLAG) test_ft_putnbr_fd.o test/test_ft_putnbr_fd.c -I header
	$(CC) $(FLAG) test_ft_lstnew.o test/test_ft_lstnew.c -I header
	$(CC) $(FLAG) test_ft_lstdelone.o test/test_ft_lstdelone.c -I header
	$(CC) $(FLAG) test_ft_lstdel.o test/test_ft_lstdel.c -I header
	$(CC) $(FLAG) test_ft_lstadd.o test/test_ft_lstadd.c -I header
	$(CC) $(FLAG) test_ft_lstiter.o test/test_ft_lstiter.c -I header
	$(CC) $(FLAG) test_ft_lstmap.o test/test_ft_lstmap.c -I header

test: test_obj obj
	$(CC) -v -o $(TEST) main.o \
	ft_memset.o \
	ft_bzero.o \
	print_mem.o \
	ft_memcpy.o \
	ft_memccpy.o \
	ft_memmove.o \
	ft_memcmp.o \
	ft_strlen.o \
	ft_memchr.o \
	ft_strdup.o \
	ft_strcpy.o \
	ft_strncpy.o \
	ft_strcat.o \
	ft_strncat.o \
	ft_strlcat.o \
	ft_strchr.o \
	ft_strrchr.o \
	ft_strstr.o \
	ft_strnstr.o \
	ft_strcmp.o \
	ft_strncmp.o \
	ft_atoi.o \
	ft_isalpha.o \
	ft_isdigit.o \
	ft_isalnum.o \
	ft_isascii.o \
	ft_isprint.o \
	ft_toupper.o \
	ft_tolower.o \
	ft_memalloc.o \
	ft_memdel.o \
	ft_strnew.o \
	ft_strdel.o \
	ft_strclr.o \
	ft_striter.o \
	ft_striteri.o \
	ft_strmap.o \
	ft_strmapi.o \
	ft_strequ.o \
	ft_strnequ.o \
	ft_strsub.o \
	ft_strjoin.o \
	ft_strtrim.o \
	ft_strsplit.o \
	ft_itoa.o \
	ft_putchar.o \
	ft_putstr.o \
	ft_putendl.o \
	ft_putnbr.o \
	ft_putchar_fd.o \
	ft_putstr_fd.o \
	ft_putendl_fd.o \
	ft_putnbr_fd.o \
	ft_lstnew.o \
	ft_lstdelone.o \
	ft_lstdel.o \
	ft_lstadd.o \
	ft_lstiter.o \
	ft_lstmap.o \
	test_ft_memset.o \
	test_ft_bzero.o \
	test_print_mem.o \
	test_ft_memcpy.o \
	test_ft_memccpy.o \
	test_ft_memmove.o \
	test_ft_memcmp.o \
	test_ft_strlen.o \
	test_ft_memchr.o \
	test_ft_strdup.o \
	test_ft_strcpy.o \
	test_ft_strncpy.o \
	test_ft_strcat.o \
	test_ft_strncat.o \
	test_ft_strlcat.o \
	test_ft_strchr.o \
	test_ft_strrchr.o \
	test_ft_strstr.o \
	test_ft_strnstr.o \
	test_ft_strcmp.o \
	test_ft_strncmp.o \
	test_ft_atoi.o \
	test_ft_isalpha.o \
	test_ft_isdigit.o \
	test_ft_isalnum.o \
	test_ft_isascii.o \
	test_ft_isprint.o \
	test_ft_toupper.o \
	test_ft_tolower.o \
	test_ft_memalloc.o \
	test_ft_memdel.o \
	test_ft_strnew.o \
	test_ft_strclr.o \
	test_ft_strdel.o \
	test_ft_striter.o \
	test_ft_striteri.o \
	test_ft_strmap.o \
	test_ft_strmapi.o \
	test_ft_strequ.o \
	test_ft_strnequ.o \
	test_ft_strsub.o \
	test_ft_strjoin.o \
	test_ft_strtrim.o \
	test_ft_strsplit.o \
	test_ft_itoa.o \
	test_ft_putchar.o \
	test_ft_putstr.o \
	test_ft_putendl.o \
	test_ft_putnbr.o \
	test_ft_putchar_fd.o \
	test_ft_putstr_fd.o \
	test_ft_putendl_fd.o \
	test_ft_putnbr_fd.o \
	test_ft_lstnew.o \
	test_ft_lstdelone.o \
	test_ft_lstdel.o \
	test_ft_lstadd.o \
	test_ft_lstiter.o \
	test_ft_lstmap.o \
	-I my_stdlib.h

run: fclean test
	./$(TEST)

clean:
	rm -fr *.o

fclean: clean
	rm -fr $(TEST)

re: fclean all