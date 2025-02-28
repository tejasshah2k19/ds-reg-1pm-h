#include <stdio.h>

// declare
void add();

//declare - define 
void sub(int a,int b){
    int ans  = a-b; 
    printf("\n ans : %d",ans);
}

int main()
{

    // clrscr -> input ? no , output ? no 
     

    add(); // call
    sub(20,3); // call 
    return 0;
}

// define
void add()
{
    int a;
    int b;
    int ans;
    printf("\nEnter two numbers");
    scanf("%d%d",&a,&b);
    ans = a+b;
    printf("\n Add : %d",ans);
}