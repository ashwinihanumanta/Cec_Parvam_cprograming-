#include <stdio.h>

int main(void) {
    int a = 11, b = 4 ;
    printf("11/4 (int) = %d\n", a / b);            // 2
    printf("11.0/4(float) = %.2f\n",11.0  / b);    // 2.25
    printf("(float)11/4 = %.2f\n", (float)a / b); // 2.25
    return 0;
}

