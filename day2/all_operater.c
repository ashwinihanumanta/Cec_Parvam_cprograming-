#include<stdio.h>
 struct person
 {
    int age ;
 };
 int main()
 {
    int a = 10,b = 3;
    int x= 5;
    int arr[5] = {10,20,30,40,50};

    printf("===BITWISE OPERATER===\n");
    printf("a & b =%d\n", a & b);
    printf("a | b = %d\n",a | b);
    printf("a ^ b= %d\n",a ^ b);
    printf("~a = %d\n",~a);
    printf("a << 1 = %d\n",a << 1);
    printf("a >> 1 = %d\n", a >> 1);
    printf("\n=== 1 ADDRESS-OF & VALUUE-AT===\n");
    int*ptr = &x;
    printf("value of x=%d\n",x);
    printf("address of x=%d\n",&x);
    printf("value using pointer = %d\n",*ptr);

    printf("\n===UNARY OPERATERS===\n");
    printf("x++ = %d\n", x++);
    printf("++x = %d\n",++x);
    printf("-x = %d\n",-x);
    printf("\n=== DOT OPERATERS ===\n");
    struct person p ={25};
    printf("person age = %d\n",p.age);

    printf("\n===SUBSTRACT OPERATERS===\n");
    printf("arr[2] = %d\n", arr[2]);

    return 0;

}
 