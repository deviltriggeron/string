#include "s21_string.h"

s21_size_t s21_strlen(char *string){ 
    s21_size_t i = 0; 

    while(*string){
        i++;
        string++;
    }

    return i;
}