#include<stdio.h>
#include<conio.h>
 long factorial(int n)
  if (n == 0)
    return 1;
else
return(n * factorial(n-1));
}
 void main()
{
  int number;
  long fact;
 clrscr();
  printf("Enter a number: ");
scanf("%d", &number);
 fact = factorial(number);
printf("Factorial of %d is %ld\n", number, fact);
 getch();
}