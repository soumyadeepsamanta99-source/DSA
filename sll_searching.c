
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};

int main() {
    struct Node *head, *temp;
    int key, pos = 1, found = 0;

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

    printf("Enter element to search: ");
    scanf("%d", &key);

    temp = head;

    while (temp != NULL) {
        if (temp->data == key) {
            printf("Element found at position %d", pos);
            found = 1;
            break;
        }

        temp = temp->next;
        pos++;
    }

    if (found == 0)
        printf("Element not found");

    return 0;
}
