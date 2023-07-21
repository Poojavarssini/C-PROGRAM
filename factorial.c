#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("Factorial of %d = %d",n,recursion(n));
}

int recursion(int n){
if (n==1)
    return n;
else
    return n*recursion(n-1);
}
