
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

    int data, pos;

    printf("Enter data: ");
    scanf("%d", &data);

    printf("Enter position: ");
    scanf("%d", &pos);

    if (pos < 1) {
        printf("Invalid position");
        return 0;
    }

    newNode = malloc(sizeof(struct Node));
    newNode->data = data;

    if (pos == 1) {
        temp = head;

        while (temp->next != head)
            temp = temp->next;

        newNode->next = head;
        temp->next = newNode;
        head = newNode;
    }
    else {
        temp = head;

        for (int i = 1; i < pos - 1 && temp->next != head; i++)
            temp = temp->next;

        if (pos > 1 && temp->next == head && pos > 3) {
            printf("Invalid position");
            free(newNode);
            return 0;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    temp = head;

    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);

    printf("(Back to Head)");

    return 0;
}
