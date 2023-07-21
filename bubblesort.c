#include <stdio.h>

void bubble_sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
   // int arr[] = {64, 34, 25, 12, 22, 11, 90};
    //int n = sizeof(arr)/sizeof(arr[0]);
    int n;
    scanf("%d",&n);
    int arr[n],total;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubble_sort(arr, n);
    printf("Sorted array: ");
    total=arr[n-1]+arr[n-2];
    printf("%d",total);
    return 0;
}
