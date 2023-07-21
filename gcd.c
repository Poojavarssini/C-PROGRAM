#include <stdio.h>

int main(){
int n1,n2,Gcd;
printf("Enter two integers: \n");
scanf("%d%d",&n1,&n2);

for(int i=1;i<=n1&&i<=n2;i++){
    if(n1%i==0&&n2%i==0){
        Gcd=i;
    }
}
printf("the GCD of %d and %d is  %d",n1,n2,Gcd);
return 0;
}
