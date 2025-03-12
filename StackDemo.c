#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int top = -1; // empty
int i;
int num;
int stack[SIZE];

void push()
{
    if (top == SIZE - 1)
    {
        printf("\nSTACK OVERFLOW");
    }
    else
    {
        printf("\nEnter the number");
        scanf("%d", &num); // 10 20 30 40 50
        top++;             // 0 1
        stack[top] = num;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nSTACK UNDERFLOW");
    }
    else
    {
        printf("\n%d POP", stack[top]);
        top--;
    }
}

void display()
{
    for (i = top; i >= 0; i--)
    {
        printf("\n %d ", stack[i]);
    }
}

void peep()
{
    int location;
    int index;
    prinf("\nEnter location");
    scanf("%d", &location);
    index = top - location + 1;
    printf(" %d ", stack[index]);
}

int main()
{
    // menu

    return 0;
}
