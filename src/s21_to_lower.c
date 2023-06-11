#include "s21_string.h"

void s21_to_lower(char *string){

    while(*string){
        if (*string > 64 && *string < 91){
            *string += 32;
        }
            *string++;
    }
}
