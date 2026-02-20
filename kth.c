#include <stdio.h>
int main() {
    int n, i, j, temp, k;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    // Sort (ascending)
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Enter k: ");
    scanf("%d", &k);
    printf("%dth Smallest = %d\n", k, arr[k - 1]);
    printf("%dth Largest = %d\n", k, arr[n - k]);
    return 0;
}