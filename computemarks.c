#include <stdio.h>
int main() {
    int n, i;
    float total = 0, avg;

    printf("Enter number of students: ");
    scanf("%d", &n);

    int marks[n];
    printf("Enter marks:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    avg = total / n;
    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", avg);
    return 0;
}