#include <stdio.h>
int main () {
    int arr[100], n, i;
    int start, end, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    start = 0;
    end = n - 1;
    while(start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    printf("Reversed array elements are:\n");
    for(i=0; i<n; i++) {
        printf("%d\n", arr[i]); 
    }
    return 0;
}