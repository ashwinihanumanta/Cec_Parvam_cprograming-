#include <stdio.h>

int main(void) {
    int a, b, c, d;
    printf("Enter three integers: ");
    if (scanf("%d %d %d%d", &a, &b, &c, &d) == 4) 
    {
        double avg = (a + b + c+d) / 4.0; // use 3.0 to force floating division
        printf("Average = %.2f\n", avg);
    } else {
        printf("Invalid input\n");
    }
    return 0;
}

