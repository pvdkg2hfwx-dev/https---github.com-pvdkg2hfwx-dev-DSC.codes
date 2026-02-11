#include <stdio.h>
#include <stdlib.h>

// Self-referential structure for Doubly Linked List
struct NODE {
    int data;
    struct NODE *prev;
    struct NODE *next;
};

// Create new node
struct NODE* createNode(int value) {
    struct NODE *newNode = (struct NODE *)malloc(sizeof(struct NODE));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Insert node at end
struct NODE* insertEnd(struct NODE *head, int value) {
    struct NODE *newNode = createNode(value);

    if (head == NULL)
        return newNode;

    struct NODE *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;

    return head;
}

// Insert node at beginning
struct NODE* insertBeginning(struct NODE *head, int value) {
    struct NODE *newNode = createNode(value);

    if (head == NULL)
        return newNode;

    newNode->next = head;
    head->prev = newNode;
    head = newNode;

    return head;
}

// Display list
void display(struct NODE *head) {
    struct NODE *temp = head;
    printf("NULL <-> ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    struct NODE *head = NULL;
    int n, value, i;

    printf("How many nodes? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        head = insertEnd(head, value);
    }

    printf("\nOriginal Doubly Linked List:\n");
    display(head);

    // Insert at beginning 
    printf("\nEnter value to insert at beginning: ");
    scanf("%d", &value);
    head = insertBeginning(head, value);

    printf("\nDoubly Linked List after insertion at beginning:\n");
    display(head);

    return 0;
}