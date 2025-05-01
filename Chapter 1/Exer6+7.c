#include <stdio.h>

int main(){ 
    
    int b;

    printf("\nEOF is %d\n", EOF);
    b = (getchar() != EOF);
    printf("The expression returns %d\n", b);

}