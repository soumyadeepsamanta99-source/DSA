
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head, *temp, *delNode;

    head = malloc(sizeof(struct Node));
    head->data = 10;

    head->next = malloc(sizeof(struct Node));
    head->next->data = 20;

    head->next->next = malloc(sizeof(struct Node));
    head->next->next->data = 30;
    head->next->next->next = head;

    int pos;

    printf("Enter position: ");
    scanf("%d", &pos);

    if (pos < 1) {
        printf("Invalid position");
        return 0;
    }

    if (pos == 1) {
        if (head->next == head) {
            free(head);
            head = NULL;
        }
        else {
            temp = head;

            while (temp->next != head)
                temp = temp->next;

            delNode = head;
            head = head->next;
            temp->next = head;

            free(delNode);
        }
    }
    else {
        temp = head;

        for (int i = 1; i < pos - 1 && temp->next != head; i++)
            temp = temp->next;

        if (temp->next == head) {
            printf("Invalid position");
            return 0;
        }

        delNode = temp->next;
        temp->next = delNode->next;

        free(delNode);
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
