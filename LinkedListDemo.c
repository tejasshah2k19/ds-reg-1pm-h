#include <stdio.h>
#include <stdlib.h>

struct node
{
    char name[20];
    int age;
    struct node *next; 
} *head = NULL, *last = NULL;

int main()
{

    head = malloc(sizeof(struct node));
    printf("Enter name and age");
    scanf("%s%d", &head->name, &head->age);
    head->next = NULL;

    printf("\nName = %s", head->name);
    printf("\nAge = %d", head->age);

    last = head;

    return 0;
}