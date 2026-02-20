#include <stdio.h>

int main() {
    int n, i, j, rank;

    printf("Enter number of students: ");
    scanf("%d", &n);
    int marks[n];
    printf("Enter marks:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &marks[i]);
    for(i = 0; i < n; i++) {
        rank = 1;
        for(j = 0; j < n; j++) {
            if(marks[j] > marks[i])
                rank++;
        }
        printf("Student %d Rank = %d\n", i + 1, rank);
    }
    return 0;
}