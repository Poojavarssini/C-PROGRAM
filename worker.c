#include<stdio.h>
struct worker
{
     char name[20];
     int salary;
     int wdays;
};
int main()
{
     struct worker a,b;
     printf("Enter Details of First Worker\n");

     printf("Enter Worker Name : ");
     scanf("%s",a.name);
     printf("Enter salary: ");
     scanf("%d",&a.salary);
     printf("Enter wdays: ");
     scanf("%d",&a.wdays);
     printf("\n\nEnter Details of Second Worker\n");
     printf("Enter Worker Name : ");
     scanf("%s",b.name);
     printf("Enter Salary: ");
     scanf("%d",&b.salary);
     printf("Enter wdays: ");
     scanf("%d",&b.wdays);
     int p1=a.salary*a.salary;
     printf("\n\nName of First Worker : %s\nPayment of First Worker : %d\n",a.name,p1);
     int p2=b.salary*b.wdays;
     printf("\n\nName of Second Worker : %s\nPayment of Second Worker : %d\n",b.name,p2);
     return 0;
}
