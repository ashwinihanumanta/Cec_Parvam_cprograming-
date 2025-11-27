#include<stdio.h>
int main(void)
{
    char name[3][20] = {
        "ashwini",
        "raghu",
        "ambhika"};
        int i;
        printf("list of names:\n");
        for(i = 0;i < 3;i++)
        {
            printf("%s\n",name[i]);
        }
        return 0;
        
}
