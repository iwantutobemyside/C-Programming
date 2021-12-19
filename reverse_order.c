/**********************************
* 
* Create by Thumasorn Prasertsri
*
* 
**********************************/

#include <stdio.h>
#define N 5

int main()
{
    int a[N];
    int *p;
    printf("Enter %d element in the array: ", N);
    for ( p = a; p <= a+N-1; p++)
    {
        scanf("%d", p);
    }
    
    printf("Elements in reverse order: ");
    for ( p = a+N-1; p >= a; p--)
    {
        printf("%d ", *p);
    }
    return 0;
}