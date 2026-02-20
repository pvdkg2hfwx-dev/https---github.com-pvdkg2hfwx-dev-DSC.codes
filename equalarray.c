#include <stdio.h>

int main() {
    int n, i, equal = 1;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    printf("Enter elements of first array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr1[i]);
    printf("Enter elements of second array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr2[i]);

    for(i = 0; i < n; i++) {
        if(arr1[i] != arr2[i]) {
            equal = 0;
            break;
        }
    }
    if(equal)
        printf("Arrays are equal\n");
    else
        printf("Arrays are not equal\n");
    return 0;
}