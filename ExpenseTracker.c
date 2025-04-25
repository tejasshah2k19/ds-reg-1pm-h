#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Expense
{

    char date[11]; // 22042025 22-04-2025 22/04/2025
    char title[30];
    int amount;
    char category[30];
};

struct Expense e[50]; // date title amount category -> variable

int index = 0;

void addExpense()
{
    printf("\nEnter Ditle");
    scanf("%s", e[index].title);

    printf("\nEnter Date");
    scanf("%s", e[index].date);

    printf("\nEnter Amount");
    scanf("%d", e[index].amount);

    printf("\nEnter Category");
    scanf("%s", e[index].category);

    index++;
}

void printExpense()
{
    int i;
    for (i = 0; i < index; i++)
    {
        printf("\n %-10s  %-12s  %-5d  %-10s", e[i].title, e[i].date, e[i].amount, e[i].category);
    }
}

void expenseByCategory()
{
    int i;
    int totalAmt = 0;
    int foodAmt = 0;
    for (i = 0; i < index; i++)
    {
        totalAmt = totalAmt + e[i].amount;

        if (stricmp(e[i].category, "Food") == 0)
        { // FOOD fooD  4! 4*3*2*1 => 24
            foodAmt = foodAmt + e[i].amount;
        }
    }

    printf("\nTotal Expense : %d", totalAmt);
    printf("\nFood Expense : %d", foodAmt);
}

int main()
{

    int choice;

    while (1)
    {
        printf("\n0 For Exit\n1 For Add Expense\n2 For List\n3 For Category Wise Expense Sum \nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addExpense();
            break;
        case 2:
            printExpense();
            break;
        case 3:
            expenseByCategory();
            break;
        case 0:
            exit(0);

        default:
            break;
        }
    }

    return 0;
}