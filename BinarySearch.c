#include<stdio.h>
#define SIZE 5 


int a[]={12,34,56,78,90};


void binarySearch(int search){//20  30   90 

    int min=0,max=SIZE-1,mid; 
    int found=0;//not found 
    
    while(min<=max){

        mid = (min+max)/2; 
        if(search == a[mid]){
            found = 1; 
            break; 
        }else if(search > a[mid]){
            //right 
            min = mid + 1; 
        }else if(search < a[mid]){
            // left  
            max = mid - 1; 
        }
    }

    if(found == 0 ){
        printf("\n %d not found ",search);
    }else{
        printf("\n %d found",search);
    }
    
}


int main(){

    binarySearch(20);//not found 
    binarySearch(30);//not found  
    binarySearch(90);//found 


    return 0;
}