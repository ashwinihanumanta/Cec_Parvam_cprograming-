#include<stdio.h>
void funt()
{
    int x=0;
    printf("a value %d\n",x);
    x++;
}
void static_vari()
{
    static int x =0;
    printf("a value %d\n",x);
    x++;
}int main()
{
    funt();
    funt();
    static_vari();
    static_vari();
    sttic_vari();
    return 0;
}
