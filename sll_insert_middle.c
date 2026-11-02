
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};

int main() {
    struct Node *head, *temp, *newNode;

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

    int data, pos, count = 0;

    printf("Enter data: ");
    scanf("%d", &data);

    printf("Enter position: ");
    scanf("%d", &pos);

    temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    if (pos < 1 || pos > count + 1) {
        printf("Invalid position");
        return 0;
    }

    newNode = malloc(sizeof(struct Node));
    newNode->data = data;

    if (pos == 1) {
        newNode->prev = NULL;
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    else {
        temp = head;

        for (int i = 1; i < pos - 1; i++)
            temp = temp->next;

        newNode->next = temp->next;
        newNode->prev = temp;

        if (temp->next != NULL)
            temp->next->prev = newNode;

        temp->next = newNode;
    }

    temp = head;

    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }

    printf("NULL");

    return 0;
}
