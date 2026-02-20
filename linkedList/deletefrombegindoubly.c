#include <stdio.h>
#include <stdlib.h>

// Self-referential structure for Doubly Linked List
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

// Delete from beginning
struct NODE* deleteBeginning(struct NODE *head) {
    if (head == NULL) {
        printf("List is empty\n");
        return NULL;
    }

    // Only one node
    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    struct NODE *temp = head;
    head = head->next;
    head->prev = NULL;
    free(temp);

    return head;
}

// Delete from end
struct NODE* deleteEnd(struct NODE *head) {
    if (head == NULL) {
        printf("List is empty\n");
        return NULL;
    }

    // Only one node
    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    struct NODE *temp = head;

    // Move to last node
    while (temp->next != NULL)
        temp = temp->next;

    temp->prev->next = NULL;
    free(temp);

    return head;
}

// Display forward
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

    // Delete from beginning
    head = deleteBeginning(head);
    printf("\nAfter deleting from beginning:\n");
    display(head);

    // Delete from end
    head = deleteEnd(head);
    printf("\nAfter deleting from end:\n");
    display(head);

    return 0;
}