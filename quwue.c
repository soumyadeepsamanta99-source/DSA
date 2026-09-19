#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if (rear == SIZE - 1)
    {
        printf("Queue is Full\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }

        rear++;
        queue[rear] = value;

        printf("Inserted = %d\n", value);
    }
}


void dequeue()
{
    if (front == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Deleted = %d\n", queue[front]);

        front++;

        // Queue becomes empty
        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}

void display()
{
    if (front == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("The Queue = ");

        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }

        printf("\n");
    }
}

int main()
{
    dequeue();

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    display();

    dequeue();

    display();

    return 0;
}