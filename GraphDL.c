#include <stdio.h>
#include <stdlib.h>

struct edges
{
    int src;
    int dest;
};

int main()
{

    int v, e;
    int i;
    int src, dest;
    struct edges *edgeArray;

    printf("\nHow many vertex and edges you have?");
    scanf("%d%d", &v, &e); // 4 4

    e = e * 2; // 8

    edgeArray = calloc(e, sizeof(struct edges));

    for (i = 0; i < e; i++)
    {
        // src dest
        printf("\nEnter Source And Destination:  ");
        scanf("%d%d", &src, &dest); // 10 30
        edgeArray[i].src = src;
        edgeArray[i].dest = dest;

        i++;
        edgeArray[i].src = dest;
        edgeArray[i].dest = src;
    }


    printf("\nSource Dest:");
    for (i = 0; i < e; i++)
    {
        printf("\n%d %d",edgeArray[i].src,edgeArray[i].dest);
    }



    return 0;
}