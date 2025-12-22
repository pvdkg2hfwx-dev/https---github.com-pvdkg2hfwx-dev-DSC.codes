#include <stdio.h>
int main () {
    int arr[100], n;
    int pos = 0, neg = 0, odd = 0, even = 0;
// enter the number of elements.
 printf("Enter the number of elements in the array: ");
 scanf("%d", &n);
// enter the elements in array.
printf("enter the elements in the array:\n");
 for (int i = 0; i < n; i++) {
     scanf("%d", &arr[i]);
 }
// for logic 
for (int i = 0; i < n; i++) {
    if (arr[i] > 0) {
        pos++;
    } else if (arr[i] < 0) {
        neg++;
    }
    if (arr[i] % 2 == 0) {
        even++;
    } else {
        odd++;
    }
 }
// print the results
 printf("Positive numbers: %d\n", pos);
 printf("Negative numbers: %d\n", neg);
 printf("Even numbers: %d\n", even);
 printf("Odd numbers: %d\n", odd);
 return 0;
}