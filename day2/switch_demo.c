#include<stdio.h>
int main()
{
    int choice;
    printf("1.add\n2. subtract\n3.multiply\nenter choice;");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("you selected ADD\n");
        break;
        case 2:
        printf("you selected SUBTRACT\n");
        break;
        case 3:
        printf("you selected MULTIPLY\n");
        break;
        default:
        printf("invalid choice\n");
    }
    return 0;
}
    
