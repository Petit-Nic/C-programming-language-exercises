#include <stdio.h>

int main() {
    int c, space;
    space = 0;

    while ((c = getchar()) != EOF){
        if (c != ' ') {
            putchar(c);
            space = 0;
       }
        else if (!space) {
            putchar(c);
            space++;
        }
    }

    return 0;
}