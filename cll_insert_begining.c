
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head, *temp, *newNode;

    head = malloc(sizeof(struct Node));
    head->data = 10;

    head->next = malloc(sizeof(struct Node));
    head->next->data = 20;

    head->next->next = malloc(sizeof(struct Node));
    head->next->next->data = 30;
    head->next->next->next = head;

    newNode = malloc(sizeof(struct Node));

    printf("Enter data: ");
    scanf("%d", &newNode->data);

    temp = head;

    while (temp->next != head) {
        temp = temp->next;
    }

    newNode->next = head;
    temp->next = newNode;
    head = newNode;

    temp = head;

    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);

    printf("(Back to Head)");

    return 0;
}
