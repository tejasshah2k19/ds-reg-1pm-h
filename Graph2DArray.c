#include<stdio.h>


int main(){

    int a[4][4];//vertex : 4 
    int src; 
    int i,j; 

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf(" %d is connected with %d",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n**************\n");
    
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }

    printf("\nWhich vertex you want to check?");
    scanf("%d",&src); 

    for(i=0;i<4;i++){
        if(a[src][i] == 1){//a[1][0] == 1 ? 
            printf(" %d",i);
        }
    }

    return 0;
}