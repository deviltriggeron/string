#ifndef S21_STRING_PLUS
#define S21_STRING_PLUS

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

typedef long int s21_size_t;

void s21_to_upper(char *string);
void s21_to_lower(char *string);
void s21_insert(int index, char *_src, char *_insert);
void s21_strcpy(char *dest, char *src);
void *s21_memchr(const void *_str, int c, s21_size_t n);
void *s21_memcpy(void *dest, const void *src, s21_size_t n);

int s21_memcmp(const void *str1, const void *str2, s21_size_t n);

s21_size_t s21_strlen(char *stirng);

#endif