#include <stdio.h>

int main () {
    int arr[100], n, i;
    int sum = 0;
    // the size of the array
    printf("enter the elements you want to sum: ");
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
    // printing the sum
    printf("The sum of the array elements is: %d\n", sum);
    return 0;   
     
}   