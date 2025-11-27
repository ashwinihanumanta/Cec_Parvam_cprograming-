#include<stdio.h>
struct employee
{
char name[20];
int id;
float salary;
};
int main (void)
{
    struct employee emp[3];
    int i;
    printf("enter data of 3 employee(name id salary):\n");
    for(i = 0;i<3;i++)
    {
    printf("Employee %d :",i);
    scanf("%s %d %f",
    emp[i].name,
    &emp[i].id,
    &emp[i].salary);

    }

int topIndex = 0;

for (i = 1; i < 3; i++)
{
if (emp[i].salary> emp[topIndex].salary)
 {
    topIndex = i;
 }

}
struct employee *pTop = &emp[topIndex];
printf("\nEmployee with highest salary:\n ");
printf("Name = %s\n",pTop->name);
printf("ID = %d\n",pTop->id);
printf("Salaray = %.2f\n",pTop->salary);
return 0;
}