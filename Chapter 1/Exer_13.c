#include <stdio.h>

/*This is absolute madness. I don't know who they wrote this book for.*/

int main () {
    int len[13]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int c, i, j;
    int word_length, max_wl;

    word_length = 0;
    max_wl = 0;

    while ((c = getchar()) != EOF) {
    
        if ((c == '\n') || (c == '\t') || (c == ' ')) {
            if ((word_length > 0) && (word_length < max_wl + 1)) {
                len[word_length - 1]++;
            } else if ((word_length > max_wl) && (word_length <13)) {
                max_wl = word_length;
                len[word_length - 1]++;
            } else if (word_length > 12) {
                len[12]++;
                max_wl = 12;
            }
            word_length = 0;

        } else if ((c >= 'A') || (c <= 'z')) {
            word_length++;
        }    
    }

    printf("Histogram of words length:\n\n");
    for(i = 0; i < max_wl+1; i++) {
        if (i == 12){
            printf("13+");
        } else printf("%d:", i+1);
        for(j = 0; j < len[i]; j++){
            printf("*");
            
        }
        printf("]\n");
    }
 

    return 0;
}