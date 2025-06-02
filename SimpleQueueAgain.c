#include <stdio.h>
#define SIZE 5

int q[SIZE];

int f = -1;
int r = -1;

void enQueue(int num)
{
    if (r == SIZE - 1)
    {
        printf("\nQueue is Full");
    }
    else
    {
        r++;
        q[r] = num;
        if (f == -1)
        {
            f = 0;
        }
    }
}

void deQueue()
{
    if (f == -1)
    {
        printf("\n Q is empty....");
    }
    else
    {
        printf(" %d remove", q[f]);
        f++;
    }
}

void display()
{
    int i;

    printf("\nQueue Data:  \n");
    for (i = f; i <= r; i++)
    {
        printf(" %d", q[i]);
    }
}

int main()
{
    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    enQueue(60);
    display();

    return 0;
}