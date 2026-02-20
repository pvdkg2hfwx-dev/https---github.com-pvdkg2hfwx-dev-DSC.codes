#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    int marks[n];
    int freq[10] = {0};
    printf("Enter marks (0-100):\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
        freq[marks[i] / 10]++;
    }
    printf("Histogram:\n");
    for(i = 0; i < 10; i++) {
        printf("%d-%d : %d\n", i*10, i*10+9, freq[i]);
    }
    return 0;
}