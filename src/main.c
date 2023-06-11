#include "s21_string.h"

int main(){
    char test[] = "hel]l[o w@or ld";
    char test_2[] = "a b c d e f g h i j k l m n o p q r s t u v w x y z";
    char test_3[] = "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z";

    s21_to_upper(test);
    s21_to_upper(test_2);
    s21_to_upper(test_3);

    s21_to_lower(test);
    s21_to_lower(test_2);
    s21_to_lower(test_3);

    printf("%s - special symbols should be ignored\n", test);
    printf("%s - all to upper case\n", test_2);
    printf("%s - nothing should be done\n", test_3);
    printf("\n");
    printf("%s - special symbols should be ignored, char stay as they are\n", test);
    printf("%s - nothing should be done\n", test_2);
    printf("%s - all to lower case\n", test_3);

    char test_cpy[10] = {0};
    char test_cpy2[10] = "TESTTESTi";

    s21_strcpy(test_cpy, test_cpy2);

    printf("%s - source\n", test_cpy2);
    printf("%s - copy\n\n", test_cpy);

    char testi[] = "TET";
    char testj[] = "TEST";

    s21_insert(4, testi, "  TEST");

    printf("%s\n", (char*)s21_memchr(testi, 'T', 2));

    printf("%d\n", s21_memcmp(testi, testj, 4));
    
    s21_memset(testi, 'A', 3); 

    for (int i = 0; i < 4; i++){
        printf("%c", testi[i]);
    } 
    


    
}