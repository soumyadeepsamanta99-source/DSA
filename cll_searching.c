
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head, *temp;
    int key, pos = 1, found = 0;

    head = malloc(sizeof(struct Node));
    head->data = 10;

    head->next = malloc(sizeof(struct Node));
    head->next->data = 20;

    head->next->next = malloc(sizeof(struct Node));
    head->next->next->data = 30;
    head->next->next->next = head;

    printf("Enter element to search: ");
    scanf("%d", &key);

    temp = head;

    do {
        if (temp->data == key) {
            printf("Element found at position %d", pos);
            found = 1;
            break;
        }

        temp = temp->next;
        pos++;

    } while (temp != head);

    if (found == 0)
        printf("Element not found");

    return 0;
}
