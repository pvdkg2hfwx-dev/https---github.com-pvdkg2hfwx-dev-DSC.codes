#include <stdio.h>
#include <stdlib.h>

//Singly Linked List Node 
struct NODE {
    int data;
    struct NODE *next;
};

//Create a new node 
struct NODE* createNode(int value) {
    struct NODE *newNode = malloc(sizeof(struct NODE));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

//Insert node at end 
struct NODE* insertEnd(struct NODE *head, int value) {
    struct NODE *newNode = createNode(value);

    if (head == NULL)
        return newNode;

    struct NODE *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

//Display linked list
void display(struct NODE *head) {
    struct NODE *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int n, i, j, temp;
    int arr[100];
    int sum = 0;
    struct NODE *head = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    //Reverse the array
    i = 0;
    j = n - 1;
    while (i < j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    //Cumulative sum and linked list creation
    for (i = 0; i < n; i++) {
        sum += arr[i];
        head = insertEnd(head, sum);
    }

    printf("\nLinked List (Cumulative Sum of Reversed Array):\n");
    display(head);

    return 0;
}