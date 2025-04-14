#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *p;
    int *a; 

    a = calloc(5,sizeof(int));//array 
    p = malloc(sizeof(int));//4 byte 

    printf("\nEnter number");
    scanf("%d",&p);

    printf(" p = %d",p);
    free(p); 


    // p = (int*)malloc(sizeof(int));

    //scan 
    //print 
    //
    return 0;
}