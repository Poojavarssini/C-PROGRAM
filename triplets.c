#include<stdio.h>
int main()
{
  int n,i,j,k,count=0,t,sum=0;
  printf("Enter threshold number: ");
   scanf("%d",&t);
   printf("Enter the array size: ");
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  if(n<3)
  {
    return 0;
  }
  else
  {
    for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
        for(k=j+1;k<n;k++){
          sum = arr[i]+arr[j]+arr[k];
          if(sum<=t)
          {
            printf("%d,%d,%d\n",arr[i],arr[j],arr[k]);
            count++;
          }
        }
      }
    }
  }
  printf("%d\n",count);
}
