#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct person{
    char name[100];
    char sur[100];
    int age;
}list[5];

int main()
{
    char key[100];
    
    for (int i=0; i<=4; i++)
    {
        printf("Please enter name of #%d: ", i+1);
        scanf("%s", list[i].name);
        printf("Please enter family name of #%d: ", i+1);
        scanf("%s", list[i].sur);
        printf("Please enter age of #%d: ", i+1);
        scanf("%d", &list[i].age);
    }
    
    for (int i=0; i<=4; i++)
    {
        printf("%s %s %d years old.\n", list[i].name, list[i].sur, list[i].age);
    }
    
    printf("Please enter keyword to search: ");
    scanf("%s", key);
    
    for (int i=0; i<=4; i++)
    {
        if (strstr(list[i].name, key) || strstr(list[i].sur, key))
        {
            printf("%s %s %d years old.\n", list[i].name, list[i].sur, list[i].age);
        }
    }
}
        
        
    
    

