#include <stdio.h>
#include <stdlib.h>

struct NODE {
    int data;
    struct NODE *next;
};
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


struct NODE* deleteEnd(struct NODE *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return NULL;
    }
    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    struct NODE *temp = head;

    while (temp->next->next != NULL)
        temp = temp->next;

    free(temp->next);     // delete last node
    temp->next = NULL;

    return head;
}
void display(struct NODE *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct NODE *head = NULL;
    int n, value, i;

    printf("How many nodes? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &value);
        head = insertEnd(head, value);
    }

    printf("Original List:\n");
    display(head);

    head = deleteEnd(head);

    printf("After deleting from end:\n");
    display(head);

    return 0;
}