#include <stdio.h>
#include <stdlib.h>

struct Expense
{

    char date[11]; // 22042025 22-04-2025 22/04/2025
    char title[30];
    int amount;
    char category[30];
};

struct Expense e[50];
int index = 0;

void addExpense()
{
    printf("\nEnter title date amount and category");
   // gets(e[index].title);
    scanf("%s%s%d%s",&e[index].title, &e[index].date, &e[index].amount, &e[index].category);
    index++;
}

void printExpense()
{
    int i;
    for (i = 0; i < index; i++)
    {
        printf("\n %s  %s  %d  %s", e[i].title, e[i].date, e[i].amount, e[i].category);
    }
}

int main()
{

    addExpense(); // 0
    addExpense(); // 1
    addExpense(); // 2
                  // 3

    printExpense();
    return 0;
}