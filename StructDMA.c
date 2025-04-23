#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[30];
    int maths, sci, eng;
    float perc;
};

int main()
{

    struct student *s;
    // s.eng -> dot operator -> property access
    s = malloc(sizeof(struct student));
    // s = (struct student*)malloc(sizeof(struct student));

    printf("\nEnter name and marks of three subjects");
    scanf("%s%d%d%d",&s->name,&s->maths,&s->sci,&s->eng);

    s->perc = (s->maths+s->sci+s->eng)/3.0; 
    
    printf("\nName Maths Sci Eng Perc \n %s  %d  %d  %d  %f",s->name,s->maths,s->sci,s->eng,s->perc);
    
    
    return 0;
}