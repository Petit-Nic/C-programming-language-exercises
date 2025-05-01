#include <stdio.h>

int c;
int state = 0;

int main() {
    while((c = getchar()) != EOF) {
        if (((c == ' ') || (c == '\t')) && state) {
            printf("\n");
            state = 0;
        }
        else if (state) {
            putchar(c);
        } else if ((c != ' ') && (c != '\t')) {
            putchar(c);
            state = 1;
        } 
    }
}
