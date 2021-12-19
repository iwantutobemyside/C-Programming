/**********************************
* 
* Create by Thumasorn Prasertsri
*
* 
**********************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>

int isUpper(const char *input);

int main(void)
{
    FILE* outFile = NULL;
    outFile = fopen("Q2OutFile.txt","w");
    
    char input1[256];
    char input2[256];
    char vowel[5] = {'A','E','I','O','U'};
    int length1;
    int length2;
    int valid1;
    int valid2;
    int ar1[5] = {0};
    int ar2[5] = {0};
    int count = 0;
    int n = 0;

    printf("Enter the first word: ");
    scanf("%s", &input1);
    printf("Enter the second word: ");
    scanf("%s", &input2);

    length1 = strlen(input1);
    length2 = strlen(input2);
    
    if (isUpper(input1) == 1)
    {
        valid1 = 1;
    }
    else
    {
        valid1 = 0;
    }
    if (isUpper(input2) == 1)
    {
        valid2 = 1;
    }
    else
    {
        valid2 = 0;
    }
    
    if ((length1 <= 49) && (valid1 == 1) && (length2 <= 49) && (valid2 == 1))
    {
        while (count != length1)
        {
            if (input1[count] == 'A')
            {
                ar1[0] = 1;
            }
            if (input1[count] == 'E')
            {
                ar1[1] = 1;
            }
            if (input1[count] == 'I')
            {
                ar1[2] = 1;
            }
            if (input1[count] == 'O')
            {
                ar1[3] = 1;
            }
            if (input1[count] == 'U')
            {
                ar1[4] = 1;
            }
            count++;
        }
        count = 0;
        
        while (count != length2)
        {
            if (input2[count] == 'A')
            {
                ar2[0] = 1;
            }
            if (input2[count] == 'E')
            {
                ar2[1] = 1;
            }
            if (input2[count] == 'I')
            {
                ar2[2] = 1;
            }
            if (input2[count] == 'O')
            {
                ar2[3] = 1;
            }
            if (input2[count] == 'U')
            {
                ar2[4] = 1;
            }
            count++;
        }

        for ( int i = 0; i < 5; i++)
        {
            if((ar1[i] == 1) && (ar2[i] == 1)) 
            {
                fprintf(outFile,"%c ", vowel[i]);
                printf("%c ", vowel[i]);
            }
            else
            {
                n++;
            }
        }
        if (n == 5)
        {
            fprintf(outFile,"X");
            printf("X");
        }
    }
    fclose(outFile);
}
    
int isUpper(const char *input)
{
    int i;
    int length = strlen(input);
    for ( i = 0; i < length; i++)
    {
        if (input[i] >= 'a' && input[i] <= 'z')
        {
            return 0;
        }
    }
    return 1;
}



    
   