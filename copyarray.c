#include <stdio.h>
int main () {
    int arr[100], copyArr[100], n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++) {
        copyArr[i] = arr[i];
    }
    printf("Copied array elements are:\n");
    for(i=0; i<n; i++) {
        printf("%d\n", copyArr[i]); 
    }
    return 0;
}