#include <stdio.h>
#define MAX 100

int stack[MAX];
int topIndex = -1;

int isEmpty()
{
    return topIndex == -1;
}

void push(int value)
{
    if (topIndex < MAX - 1)
        stack[++topIndex] = value;
}

int pop()
{
    return stack[topIndex--];
}

int top()
{
    return stack[topIndex];
}

void insertSorted(int value)
{
    int temp;

    if (isEmpty() || value <= top())
    {
        push(value);
        return;
    }

    temp = pop();
    insertSorted(value);
    push(temp);
}

void sortStack()
{
    int temp;

    if (isEmpty())
        return;

    temp = pop();
    sortStack();
    insertSorted(temp);
}

void display()
{
    if (isEmpty())
        return;

    printf("%d ", pop());
    display();
}

int main()
{
    push(30);
    push(10);
    push(50);
    push(20);
    push(40);

    printf("Original Stack: ");
    display();

    push(30);
    push(10);
    push(50);
    push(20);
    push(40);

    sortStack();

    printf("\nSorted Stack: ");
    display();

    return 0;
}