#include<stdio.h>
#include<conio.h>
int i;
int main()
{
    int n,primeno;
    printf(" Enter a number : ");
    scanf("%d",&n);
    i = n/2;
    primeno = Prime(n);
   if(primeno==1)
        printf(" The number %d is a prime number",n);
   else
      printf(" The number %d is not a prime number",n);
   return 0;
}

int Prime(int n)
{
    if(i==1)
    {
        return 1;
    }
    else if(n%i==0)
    {
         return 0;
    }

}


/*
#include<stdio.h>
int main(){
    int n;
    int count;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(n%i!=0){
          count==0;
        }
        else{
          count==1;
        }
    }
    if(count==0){
          printf("The given number is not a prime number");
    }
    else{
        printf("The given number is a prime number");
    }

}
*/

