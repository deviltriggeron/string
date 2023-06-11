#include "s21_string.h"

void s21_to_upper(char *string){

    while(*string){
        if (*string > 96 && *string < 123){
            *string -= 32;
        }
            *string++;
    }
}
