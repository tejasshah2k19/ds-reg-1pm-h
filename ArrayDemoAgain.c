#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int arr[5];

int num;
int location;

void addElement()
{

    printf("\nEnter number");
    scanf("%d", &num); // 10

    printf("\nEnter location");
    scanf("%d", &location); // 5
    arr[location - 1] = num;
}

void printArray()
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        // if(arr[i] != 0)
        printf(" %d", arr[i]);
    }
}

void removeElement()
{
    printf("\nEnter location : remove ");
    scanf("%d", &location);
    arr[location - 1] = 0;
}

void search()
{
    int i;
    int found = 0; // not found
    printf("\nEnter number that You want to search?");
    scanf("%d", &num);

    for (i = 0; i < SIZE; i++)
    {
        if (arr[i] == num)
        {
            found = 1;
        }
    }

    if (found == 1)
    {
        printf("\nFound");
    }
    else
    {
        printf("\nNot Found");
    }
}

int main()
{

 
    int location;
    int i;
    int choice;

    while (1)
    {
        printf("\n1 For Add");
        printf("\n2 For Display");
        printf("\n3 For remove");
        printf("\n4 for search num");
        printf("\n0 For Exit");
        printf("\nEnter your choice");

        scanf("%d", &choice); // 1 2 0

        switch (choice)
        {
        case 1:

            addElement();
            break;
        case 2:
            printArray();
            break;
        case 3:
            removeElement();
            break;
        case 4:
            search();
            break;

        case 0:
            exit(0);
        default:
            break;
        } // switch
    } // while

    //

    return 0;
}