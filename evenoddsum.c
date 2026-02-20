#include <stdio.h>
int main() {
    int n, i, evenSum = 0, oddSum = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++) {
        if(i % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }

    printf("Sum of even index elements = %d\n", evenSum);
    printf("Sum of odd index elements = %d\n", oddSum);
    return 0;
}
