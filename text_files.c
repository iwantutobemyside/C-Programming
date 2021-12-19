/**********************************
* 
* Create by Thumasorn Prasertsri
*
* 
**********************************/

#include <stdio.h>
#include <stdlib.h>

// text files

struct stud
{
    int rno;
    float per;
    char name[20];
    char add[20];
}s;

int main()
{
    FILE *fp;
    fp = fopen("student.txt","w");
    
    printf("Enter record of student in student.txt\n");
    
    printf("\nEnter student number : ");
    scanf("%d",&s.rno);
    
    printf("\nEnter name of student: ");
    scanf("%s",&s.name);
    
    printf("\nEnter student address : ");
    scanf("%s",&s.add);
    
    printf("\nEnter percentage of student : ");
    scanf("%f",&s.per);
    
    fprintf(fp,"student number: %d\nstudent name: %s\nstudent address: %s\nstudent percentage: %f",s.rno,s.name,s.add,s.per);
    printf("\nRecord stored in file...");
    
    fclose(fp);
    return 0;
}