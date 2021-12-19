/**********************************
* 
* Create by Thumasorn Prasertsri
*
* 
**********************************/

#include <stdio.h>
#define MAX 10

int main()
{
    int a[MAX][MAX];
    int b[MAX][MAX];
    int product[MAX][MAX];
    int arows;
    int brows;
    int acolumns;
    int bcolumns;
    int sum = 0;

    printf("Enter the rows and columns of the matrix a: ");
    scanf("%d %d", &arows, &acolumns);

    printf("Enter the elements of matrix a: \n");
    for (int i = 0; i < arows; i++)
    {
        for (int j = 0; j < acolumns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the rows and columns of the matrix b: ");
    scanf("%d %d", &brows, &bcolumns);
    for (int i = 0; i < brows; i++)
    {
        for (int j = 0; j < bcolumns; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < arows; i++)
    {
        for (int j = 0; j < bcolumns; j++)
        {
            for (int k = 0; k < brows; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            product[i][j] = sum;
            sum = 0;
        }
    }

    printf("Resultant matrix\n");
    for (int i = 0; i < arows; i++)
    {
        for (int j = 0; j < bcolumns; j++)
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    
    return 0;
            
        
    
}