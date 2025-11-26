#include<stdio.h>
int main(void)

{
    int marks[5] = {78,95,60,88,72};
    int i;
int max = marks[0];
int min = marks[0];
int searchValue = 88;
int foundIndex = -1;
printf ("array element (traversing):\n");
for(i = 0;i<5; i++)
{
    printf("marks[%d] = %d\n",i,marks[i]);

}
for(i = 0;i<5;i++)
{
    if(marks[i]>max)
    {
        max = marks[i]; 

    }
    if(marks[i] < min)
{
    min = marks[i];
}
}
printf("\nMaximum marks = %d\n",max);
printf("Minimum marks =%d\n",min);
for(i = 0;i <5;i++)
{
    if(marks[i]== searchValue)
    {
        foundIndex = i;
        break;
    }
}
if(foundIndex != -1)
{
    printf("\nvalue %d found at index %d\n",searchValue,foundIndex);
}
else{
    printf("\nValue %d not found in array\n",searchValue);
}
return 0;
}