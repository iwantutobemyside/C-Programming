/**********************************
* Program to Check Leap Year
*
* Create by Thumasorn Prasertsri
* 
*
**********************************/

#include <stdio.h>

int main()
{
    int leap_year;  // variable declarations
    
    printf("Enter a year : "); // prompt the user
    scanf("%d",&leap_year);
    
    if(leap_year%4 == 0) // check leap year
    {
        if(leap_year%100 == 0)
            {
                if(leap_year%400 == 0)
                {
                    printf("%d is a leap year",leap_year); // if a year is divisible by 4,100,400 is a leap year
                }
                else
                {
                    printf("%d is not a leap year",leap_year); // if a year is divisible by 4,100 but not divisible by 400 is not leap year
                }
            }
        else
        {
            printf("%d is a leap year",leap_year); // if a year is divisible by 4 but not divisible by 100 is not a leap year
        }
    }
    
    else
    {
        printf("%d is not a leap year",leap_year); // all other years are not leap year
    }
    
    return 0; // indicate that program ended successfully
}