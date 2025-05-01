#include <stdio.h>

int main() {
    int c, nl, tab, blank;
    nl = 0;
    tab = 0;
    blank = 0;

    while ((c = getchar()) != EOF){ /*EOF is Ctrl+D on Mac*/
        if (c == '\n')
            nl++;
        else if (c == '\t')
            tab++;
        else if (c == ' ')
            blank++;
        c++;
    }
    printf("Number of blanks: %d \nNumber of tabs: %d \n\Number of newlines: %d\n", blank, tab, nl);
    return 0;
}