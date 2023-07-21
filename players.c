#include<stdio.h>
#include<stdlib.h>
struct players{
    char str[100];
    int runs;
};
int main(){
    struct players a[11];
    int sum=0;
    for(int i=0;i<=10;i++){
        scanf("%s",&a[i].str);
        scanf("%d",&a[i].runs);
        sum+=a[i].runs;
    }
    printf("The total run is %d",sum);

}
