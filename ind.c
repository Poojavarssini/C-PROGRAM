#include<stdio.h>
int main(){
    int arr[] = {90,2,70,12,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp[n];
    for(int i=0; i<n; i++)
    temp[i] = arr[i];
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int x = temp[i];
            temp[i] = temp[j];
            temp[j] = x;
        }
    }
    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){
            if(temp[j]==arr[i])
            {
                arr[i]= j+1;
                break;
            }
        }
    }
    for(int i=0; i<n; i++){
         printf("%d ", temp[i]);
    }
}
