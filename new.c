#include<stdio.h>
void sqre(int *a,int *b){
//int p=a*b;
*a *=2;
*b *=3;
//printf("The product of %d and %d is %d ",n1,n2,p);
printf("The res is: %d %d\n",*a,*b);

}
void main(){
int a,b;
int *a1=&a;
int *b1=&b;
/*printf("Enter a value: ");
scanf("%d%d",&a,&b);*/
sqre(a1,b1);
printf("The res is: %d %d\n",&a,&b);
}
