#include <stdio.h>
#include <stdlib.h>

struct NODE {
    int data;
    struct NODE *next;
};

//insertt at end
struct NODE* insertEnd(struct NODE *head, int value) {
    struct NODE *newNode = (struct NODE*)malloc(sizeof(struct NODE));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
        return newNode;

    struct NODE *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

//specific position
struct NODE* insertAtPosition(struct NODE *head, int value, int pos) {
    struct NODE *newNode = (struct NODE*)malloc(sizeof(struct NODE));
    newNode->data = value;

    //insert at beginning
    if (pos == 1) {
        newNode->next = head;
        return newNode;
    }

    struct NODE *temp = head;
    int i;

   //move to the node before the desired position
    for (i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        printf("Invalid position\n");
        free(newNode);
        return head;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

//display list
void display(struct NODE *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct NODE *head = NULL;
    int n, value, pos, i;

    printf("How many nodes? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &value);
        head = insertEnd(head, value);
    }

    printf("Original List:\n");
    display(head);

    printf("Enter value and position: ");
    scanf("%d %d", &value, &pos);

    head = insertAtPosition(head, value, pos);

    printf("After insertion:\n");
    display(head);

    return 0;
}