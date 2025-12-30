#include <stdio.h>
int main () {
int arr [100], n, i;
int sum = 0;
float average;
// the size of the array
printf("enter the number of elements you want to average: ");
scanf("%d", &n);
// reading values into the array
for(i=0; i<n; i++) {    
    printf("Enter value for element %d: ", i+1);
    scanf("%d", &arr[i]);
}
// calculating the sum of array elements
for(i=0; i<n; i++) {    
    sum += arr[i];
}
// calculating the average
average = (float)sum / n;
// printing the average
printf("The average of the array elements is: %.2f\n", average);
return 0;   
}