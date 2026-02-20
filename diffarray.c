#include <stdio.h>
int main() {
    int n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], diff[n];
    printf("Enter elements of first array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr2[i]);
    for(i = 0; i < n; i++)
        diff[i] = arr1[i] - arr2[i];

    printf("Difference array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", diff[i]);
    return 0;
}