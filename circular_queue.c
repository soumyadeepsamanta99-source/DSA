#include <stdio.h>
#define SIZE 5

int item[SIZE];
int front = -1, rear = -1;

int isFull() {
    if ((front == (rear + 1) % SIZE) || (front == 0 && rear == SIZE - 1)) {
        return 1;
    }
    return 0;
}

int isEmpty() {
    if (front == -1) {
        return 1;
    }
    return 0;
}

void enqueue(int element) {
    if (isFull()) {
        printf("Full\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % SIZE;
        item[rear] = element;
        printf("Inserted = %d\n", element);
    }
}

int dequeue() {
    int element;
    if (isEmpty()) {
        printf("Empty\n");
        return -1;
    } else {
        element = item[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % SIZE;
        }
        printf("Deleted element = %d\n", element);
        return element;
    }
}

void display() {
    int i;
    if (isEmpty()) {
        printf("Empty\n");
    } else {
        printf("Front = %d, ", front);
        
       
        for (i = front; i != rear; i = (i + 1) % SIZE) {
            printf("%d ", item[i]);
        }
        printf("%d ", item[i]); 
        
        printf(", Rear = %d\n", rear);
    }
}

int main() {
    
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    
    dequeue();
    display();
    
    return 0;
}