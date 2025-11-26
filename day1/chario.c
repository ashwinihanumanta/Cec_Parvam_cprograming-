#include<stdio.h>
int main(void)
{
    int ch;
    printf("enter a charecter:");
    ch = getchar(); // read single charecter
    printf("you entered:");
    putchar(ch);//write single charecter 
    putchar('\n');
    return 0;
}

