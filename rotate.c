#include <stdio.h>
int main() {
    int n, i, temp;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    // Left rotate by 1

    temp = arr[0];
    for(i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
    arr[n - 1] = temp;
    printf("Array after left rotation by 1:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    // Right rotate by 1

    temp = arr[n - 1];
    for(i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];
    arr[0] = temp;
    printf("\nArray after right rotation by 1:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}