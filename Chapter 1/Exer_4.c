#include <stdio.h>

int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = -40;
    upper = 120;
    step = 5;

    celsius = lower;
    printf("Celsius to Fahrenheit conversion\n\n");
    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32.0;
        printf("%4.0f %6.1f\n", celsius, fahr); /*since the step is 5, the decimal point is actually pointless*/
        celsius = celsius + step;
    }
}