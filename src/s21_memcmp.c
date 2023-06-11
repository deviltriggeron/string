#include "s21_string.h"

int s21_memcmp(const void *str1, const void *str2, s21_size_t n){
    const unsigned char *p = str1;
    const unsigned char *p_2 = str2;

    for (s21_size_t i = 0; i < n; i++, p++, p_2++){
        if (*p != *p_2){
            return (*p < *p_2) ? -1 : 1;
        }
    }

    return 0;
}

