#include <stdio.h>
#include<string.h>
#include<conio.h>
struct employee
{
    char name[30];
    int id;
    int experience;
    int salary;
};
void main()
{
    int i,j;
    struct employee e[5];
    for(i=1;i<6; i++)
    {
        printf("\n enter details of employee %d:\n\n enter name :",i);
        scanf("%s",&e[i].name);
        printf("\n enter Employee ID :");
        scanf("%d",&e[i].id);
        printf("\n enter experience:");
        scanf("%d",&e[i].experience);
        printf("\n enter salary:");
        scanf("%d",&e[i].salary);
    }
    for(j=1;j<6;j++)
    {
        printf("\n Details of employee %d:\n",j);
        printf("\n\tName: %s\n",e[j].name);
        printf("\n\tID: %d\n",e[j].id);
        printf("\n\tExperience: %d\n",e[j].experience);
        printf("\n\tSalary: %d\n",e[j].salary);
    }
    return 0;
}
