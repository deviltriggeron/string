#include "s21_string.h"

void *s21_memset(void *str, int c, s21_size_t n){

    unsigned char *p = str;

    while (n-- >= 0){
       *p++ = (unsigned char)c;
    }
    return str;
} 