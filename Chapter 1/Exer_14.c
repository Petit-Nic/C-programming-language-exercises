#include <stdio.h>

int main () {
    int freq[25];
    int c, i, j;

    for (i = 0; i < 26; i++) {
        freq[i] = 0;
    }

    while ((c = getchar()) != EOF) {
    
        if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') || (c <= 'z'))) {
            if (c <= 'Z') 
                freq[c - 'A']++;
            else 
                freq[c - 'a']++;
        }

    }
 
    printf("Histogram of letter frequency (1=a, 26=z):\n\n");
    for(i = 0; i < 26; i++) {
        printf("%d", i+1);
        for(j = 0; j < freq[i]; j++){
            printf("*");
            
        }
        printf("]\n");
    }

    return 0;
}