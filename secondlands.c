#include <stdio.h>
int main() {
    int n, i;
    int largest, second_largest;
    int smallest, second_smallest;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    largest = second_largest = arr[0];
    smallest = second_smallest = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if(arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
        if(arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        } else if(arr[i] < second_smallest && arr[i] != smallest) {
            second_smallest = arr[i];
        }
    }
    printf("Second Largest = %d\n", second_largest);
    printf("Second Smallest = %d\n", second_smallest);
    return 0;
}