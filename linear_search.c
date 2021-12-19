/**********************************
* 
* Create by Thumasorn Prasertsri
*
* 
**********************************/

#include <stdio.h>
#include <conio.h>

int linear_search(int arr[], int n, int x)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(arr[i] == x)
        return i + 1;
    }  
    return -1;
}

void main()
{
    int arr[50];
    int n;
    int i;
    int x; 
    int res;
    
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    
    printf("\nEnter the numbers: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("\nEnter the number to be searched: ");
    scanf("%d", &x);

    res = linear_search(arr, n, x);
    if(res == -1)
    {
        printf("\n%d does not exist in the array.", x);
    }
    else
    {
        printf("\n%d is present at position %d in the array.", x, res);
    }
    getch();
}
