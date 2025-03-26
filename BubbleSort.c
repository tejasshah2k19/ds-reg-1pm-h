#include <stdio.h>
#define S 6

int a[] = {96, 32, 48, 74, 58, 15};

void display()
{
    int i;
    for (i = 0; i < S; i++)
    {
        printf(" %d", a[i]);
    }
}

void bubbleSort()
{
    int i, j, tmp;
    for (i = 0; i < S; i++)//0:5 1:5 2:5 3:5 4:5 5:5 
    {
        for (j = 0; j < S - 1 - i ; j++)//0 1 2 3 4  
        {
            if (a[j] > a[j + 1])//n*n
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}

int main()
{   

    printf("\nArray Before Sort : ");
    display();

    bubbleSort();

    
    printf("\nArray After Sort : ");
    display();

    
    return 0;
}