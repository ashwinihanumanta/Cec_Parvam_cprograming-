#include<stdio.h>
struct student
{
    int age;
    float marks;

};
 int main()
 {
    int intvar = 10;
    float floatvar = 5.5;
    char charvar = 'A';
    
    struct student s1 = {20,85.5};
    int *pInt=&intvar;
    float *pFloat =&floatvar;
    char*pChar = &charvar;
    struct student *pStudent = &s1;

    printf("Integer vai pointer = %d\n",*pInt);
    printf("float via pointer = %.1f\n",*pFloat);
    printf("char via pointer =%c\n", *pChar);
    printf("student age via pointer  = %d\n",pStudent->age);
    printf("student marks via pointer = %.1f\n", pStudent->marks);

    return 0;
 }