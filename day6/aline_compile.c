#include<stdio.h>
struct example
{
    char a;
    int b;
    char c;

};
int main(void)
{
    printf("size of struct examle = %lu\n", sizeof(struct example));
    return 0;
}