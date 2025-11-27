#include<stdio.h>
#define max 5//maximum size of stack
int stack[max];
int top=-1;
void push(int value)
{
    if(top==max-1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        top++;
        stack[top]=value;
        printf("%d pushed\n",value);
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack underflow\n");
    }
    else{
        printf("%d popped\n",stack[top]);
        top--;
    }
}
void display()
{
    if (top==-1)
    {
        printf("Stack empty\n");
    }
    else{
        for(int i=top;i>=0;i--)
        {
            printf("%d",stack[i]);
        }
        printf("\n");
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    display();
    pop();
        display();
  return 0;
}