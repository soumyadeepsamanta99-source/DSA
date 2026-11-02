
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};

int main() {
    struct Node *head, *temp, *delNode;

    head = malloc(sizeof(struct Node));
    head->data = 10;
    head->prev = NULL;

    head->next = malloc(sizeof(struct Node));
    head->next->data = 20;
    head->next->prev = head;

    head->next->next = malloc(sizeof(struct Node));
    head->next->next->data = 30;
    head->next->next->prev = head->next;
    head->next->next->next = NULL;

    int pos;

    printf("Enter position: ");
    scanf("%d", &pos);

    if (pos < 1) {
        printf("Invalid position");
        return 0;
    }

    temp = head;

    for (int i = 1; i < pos && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        printf("Invalid position");
    }
    else {
        delNode = temp;

        if (temp->prev != NULL)
            temp->prev->next = temp->next;
        else
            head = temp->next;

        if (temp->next != NULL)
            temp->next->prev = temp->prev;

        free(delNode);
    }

    temp = head;

    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }

    printf("NULL");

    return 0;
}
