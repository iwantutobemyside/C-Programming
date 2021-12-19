/**********************************
* 
* Create by Thumasorn Prasertsri
*
* 
**********************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char input[256];
    char a[] = "Apples, Banana, Lemon";
    char *search;
    
    printf("Enter the words: ");
    scanf("%s", &input);
    
    search = strstr(a, input);
    
    if (search != NULL)
    {
        printf("Looking for %s\n", input);
        printf("Found at position %d\n", search - a);
    }
    else
    {
        printf("not found");
    }
}
    
    
    
    
    