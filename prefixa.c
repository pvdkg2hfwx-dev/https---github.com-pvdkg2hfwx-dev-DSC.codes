#include <stdio.h>
int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n], prefix[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    prefix[0] = arr[0];
    for(i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] + arr[i];

    printf("Prefix sum array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", prefix[i]);
    return 0;
}