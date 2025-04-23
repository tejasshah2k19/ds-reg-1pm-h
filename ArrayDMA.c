#include<stdio.h>
#include<stdlib.h> 

int g;//global 

void input(int *p){
    int i;
    for(i=0;i<5;i++){
        printf("\nEnter number");
        scanf("%d",&p[i]);
    }
}

void display(int *p){
    int i;
    for(i=0;i<5;i++){
        printf("\n %d",p[i]);
    }
}

void printOddSum(int *a){
    int sum=0;
    int i;
    for(i=0;i<5;i++){
        if(a[i] % 2 != 0 ){
            sum = sum + a[i];
        }
    }
    printf("\n Odd sum = %d",sum);
}

int main(){
    int  *a; //local 

    a = calloc(5,sizeof(int));

    input(a); //pass by ref 
    display(a);//pass by ref
    printOddSum(a); 
    free(a); 

    return 0; 
}