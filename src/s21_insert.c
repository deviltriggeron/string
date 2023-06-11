#include "s21_string.h"

                            /*
                            Input : str  = "GeeksForGeeks"
                                    str.Insert(5, "GFG");
                            Output: GeeksGFGForGeeks

                            Input : str  = "GeeksForGeeks"
                                    str.Insert(8, " ");
                            Output: GeeksFor Geeks
                            */

void s21_insert(int index, char *_src, char *_insert){

    int j = 0;
    int size = s21_strlen(_src) + s21_strlen(_insert);    

    char *buffer = calloc(size + 1, sizeof(char*));

    for (size_t i = 0; i < s21_strlen(_src); i++){
        buffer[i] = _src[i];
       
    }

    for (size_t i = index; i < size; i++){
        buffer[i] = _insert[j];
        j++;
    }

    buffer[size] = '\0';

    s21_strcpy(_src, buffer);
}