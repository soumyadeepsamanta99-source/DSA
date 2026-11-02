
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};

int main() {
    struct Node *head, *newNode, *temp;

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

    newNode = malloc(sizeof(struct Node));

    printf("Enter data: ");
    scanf("%d", &newNode->data);

    newNode->prev = NULL;
    newNode->next = head;

    head->prev = newNode;
    head = newNode;

    temp = head;

    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }

    printf("NULL");

    return 0;
}
