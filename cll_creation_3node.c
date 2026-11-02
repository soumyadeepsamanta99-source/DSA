
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *first, *second, *third, *temp;

    first = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));

    first->data = 10;
    second->data = 20;
    third->data = 30;

    first->next = second;
    second->next = third;
    third->next = first;

    temp = first;

    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != first);

    printf("(Back to Head)");

    free(first);
    free(second);
    free(third);

    return 0;
}
