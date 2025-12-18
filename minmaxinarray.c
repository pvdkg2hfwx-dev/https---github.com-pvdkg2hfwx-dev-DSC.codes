//max min array program.
#include <stdio.h>
int main() {
int n, i;
int arr[100];

printf("Enter the number of elemnets");
scanf("%d", &n);

// read array elements 
for (i=0; i<n; i++) {
    printf("enter the element %d: ", i+1);
    scanf("%d", &arr[i]);
}
// assume first element is max and min 
int max = arr[0];
int min = arr[0];

// for other elements
for (i=1; i<n; i++){
    if (arr[i] > max){
        max = arr[i];
    }
    if (arr[i] < min){
        min = arr[i];
    }
}
printf("Maximun element is %d\n", max );
printf("minimum element is %d\n", min );
return 0;
}
