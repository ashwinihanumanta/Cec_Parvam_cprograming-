#include<stdio.h>
int main(void)
{
    int a = 10,b = 3;
    //arithmetic
    printf("a+b = %d\n",a+b); //add:13
    printf("a-b = %d\n",a-b); //subtract:7
    printf("a*b = %d\n",a*b); //multiply:30
    printf("a/b = %d\n",a/b); //integer division:3
    printf("a %% b = %d\n",a % b); //remainder:1
    
    //relational
    printf("a > b = %d\n",a >b);//1(true)
    printf("a == b = %d\n",a==b);//0(false)
    //logical(combine condition)
    int cond = (a>0) && (b>0); //both positive
    printf("both positive = %d\n",cond);

    return 0;
}

