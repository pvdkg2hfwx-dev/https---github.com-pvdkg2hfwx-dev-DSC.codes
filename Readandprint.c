#include <stdio.h>

int main () {
    int arr[5];
    int i;
    // Reading values into the array
    for(i=0; i<5; i++) {    
        printf("Enter value for 5 elemets: ", i);
        scanf("%d", &arr[i]);
    }
    // Printing values from the array
    printf("The elements in the array are:\n");
    for(i=0; i<5; i++) {    
        printf("%d\n", arr[i]);
    } 
    return 0;    

}
