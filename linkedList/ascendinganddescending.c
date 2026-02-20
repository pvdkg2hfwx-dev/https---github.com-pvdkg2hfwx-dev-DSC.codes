#include <stdio.h>
#include <stdlib.h>

// Doubly Linked List Node
struct NODE {
    int data;
    struct NODE *prev;
    struct NODE *next;
};

// Create a new node
struct NODE* createNode(int value) {
    struct NODE *newNode = (struct NODE*)malloc(sizeof(struct NODE));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Insert at end
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

// Sort function (Ascending or Descending)
struct NODE* sortList(struct NODE *head, int ascending) {
    struct NODE *i, *j;
    int temp;

    if (head == NULL)
        return head;

    for (i = head; i != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {

            // Ascending condition
            if (ascending && i->data > j->data) {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }

            // Descending condition
            if (!ascending && i->data < j->data) {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }

    return head;
}

// Main function
int main() {
    struct NODE *head = NULL;
    int n, value, i, choice;

    printf("How many nodes? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        head = insertEnd(head, value);
    }

    printf("\nOriginal Doubly Linked List:\n");
    display(head);

    printf("\nChoose sorting order:\n");
    printf("1. Ascending\n");
    printf("2. Descending\n");
    scanf("%d", &choice);

    if (choice == 1)
        head = sortList(head, 1);
    else
        head = sortList(head, 0);

    printf("\nSorted Doubly Linked List:\n");
    display(head);

    return 0;
}