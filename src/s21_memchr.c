#include "s21_string.h"

void *s21_memchr(const void *_str, int c, s21_size_t n){

    const unsigned char *p = _str;

    for (s21_size_t i = 0; i < n; i++, p++){
        if (*p == (unsigned char)c){
            return (void *)p;
        }
    }
    return NULL;
}