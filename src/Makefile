(CC) = gcc
(CFLAGS) = -g -Wall -Werror -Wextra
(HEAD) = s21_string.h

all:s21_strlen.o s21_strcpy.o s21_memset.o s21_memchr.o s21_memcmp.o s21_to_lower.o s21_to_upper.o s21_insert.o
	$(CC) $(CFLAGS) $^ main.c -o test

s21_strlen.o: s21_strlen.c $(HEAD)
	$(CC) $(CFLAGS) -c $< -o $@

s21_strcpy.o: s21_strcpy.c $(HEAD)
	$(CC) $(CFLAGS) -c $< -o $@

s21_memchr.o: s21_memchr.c $(HEAD)
	$(CC) $(CFLAGS) -c $< -o $@

s21_memcmp.o: s21_memcmp.c $(HEAD)
	$(CC) $(CFLAGS) -c $< -o $@

s21_memset.o: s21_memset.c $(HEAD)
	$(CC) $(CFLAGS) -c $< -o $@

s21_to_lower.o: s21_to_lower.c $(HEAD)
	$(CC) $(CFLAGS) -c $< -o $@

s21_to_upper.o: s21_to_upper.c $(HEAD)
	$(CC) $(CFLAGS) -c $< -o $@

s21_insert.o: s21_insert.c $(HEAD)
	$(CC) $(CFLAGS) -c $< -o $@

s21_memcpy.o: s21_memcpy.c $(HEAD)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf *.o 

rebuild: 
	rm -rf *.o | make