#include <stdio.h>

int main() {
    int n,arr[100];
   scanf("%d\n",&n);
    int sum = 0, avg = 0;
    for (int i = 0; i < n; i++) {
            scanf("%d\n",&arr[i]);
        sum += arr[i];
    }
    avg = sum / n;
    printf("The average is %d\n", avg);
    printf("The value of the next index is %d\n", arr[avg + 1]);

    return 0;
}
