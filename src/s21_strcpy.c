#include "s21_string.h"

void s21_strcpy(char *dest, char *src){

    char temp_char = 0;

    for (size_t i = 0; i < s21_strlen(src); i++){
        temp_char = src[i];
        dest[i] = temp_char;
    }

    dest[s21_strlen(src)] = '\0';
}