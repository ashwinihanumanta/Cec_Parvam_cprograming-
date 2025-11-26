#include<stdio.h>
int main()
{
    int n, t1 = 0,t2= 1,nextterm;
    printf("enter the number of term:");
    scanf("%d",&n);
    printf("fibonacci series:");
    for (int i = 1;i<=n;++i)
    {
    printf("%d",t1);
    nextterm = t1+t2;
    t1 = t2;
    t2 = nextterm;
    if (i<n)
    {
        printf(",");
        }
        }
        printf("\n");//add a newline at end for better formatting
        return 0;
    }
    
    
