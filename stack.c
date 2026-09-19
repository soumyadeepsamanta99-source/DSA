#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

int isFull()
{
    return top == MAX - 1;
}

// Check whether stack is empty
int isEmpty()
{
    return top == -1;
}

void push(int value)
{
    if (isFull())
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = value;
        printf("Pushed %d\n", value);
    }
}

int pop()
{
    if (isEmpty())
    {
        printf("Stack Underflow\n");
        return -1;
    }
    else
    {
        int poppedValue = stack[top];
        top--;
        return poppedValue;
    }
}

int peek()
{
    if (isEmpty())
    {
        printf("Stack is empty\n");
return -1;
    }

    return stack[top];
}

// Display stack elements
void display()
{
    if (isEmpty())
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements: ");

    for (int i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }

    printf("\n");
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();

    printf("Top element = %d\n", peek());

    printf("Popped = %d\n", pop());

    display();

    return 0;
}