
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head, *temp, *last;

    head = malloc(sizeof(struct Node));
    head->data = 10;

    head->next = malloc(sizeof(struct Node));
    head->next->data = 20;

    head->next->next = malloc(sizeof(struct Node));
    head->next->next->data = 30;
    head->next->next->next = head;

    if (head->next == head) {
        free(head);
        head = NULL;
    }
    else {
        temp = head;

        while (temp->next->next != head)
            temp = temp->next;

        last = temp->next;
        temp->next = head;

        free(last);
    }

    if (head != NULL) {
        temp = head;

        do {
            printf("%d -> ", temp->data);
            temp = temp->next;
        } while (temp != head);
    }

    printf("(Back to Head)");

    return 0;
}
