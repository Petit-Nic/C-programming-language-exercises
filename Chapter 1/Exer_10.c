#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF){
        if (c == '\t')
            printf("\\t");
        else if (c == '\\') {
            printf("\\");
            printf("\\");
        }
        else if (c == '\b') /*This will not show in a terminal input, but should work correctly if the input is read from a file*/
            printf("\\b");
        else putchar(c);
    }

    return 0;
}