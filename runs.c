#include<stdio.h>
struct player
{
     char name[20];
     int runs;
};
int main()
{
     int i,sum=0;
     struct player a[4];
     printf("Enter Name of Player Runs Scored \n");
     for(i=0;i<=4;i++)
     {
          scanf("%s",a[i].name);
          scanf("%d",&a[i].runs);
          printf("\n");
     }
     for(i=0;i<=10;i++)
          sum=sum+a[i].runs;
     printf("Total Runs Scored by Team: %d",sum);
     return 0;
}

