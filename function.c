/**********************************
* 
* Create by Thumasorn Prasertsri
*
* 
**********************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void build_in()
{
    system("cls"); // clear screen
    printf("[1] Built-in Functions\n"); // Display of names exercise
    
    // declare variable
    double x1 = 7.5; 
    double x2 = 0.0;
    double x3 = -6.4;
    double x4 = -5.5;
    
    // Display the result of x
    printf("\nx = %.1lf\n", fabs(x1));
    printf("x = %.1lf\n", floor(x1));
    printf("x = %.1lf\n", fabs(x2));
    printf("x = %.1lf\n", ceil(x2));
    printf("x = %.1lf\n", fabs(x3));
    printf("x = %.1lf\n", ceil(x3));
    printf("x = %.1lf\n", ceil(-fabs(-8 + floor(x4))));
}

void hypo()
{
    system("cls"); // clear screen
    printf("[2] Hypotenuse\n\n"); // Display of names exercise
    
    // declare variable
    double side1;
    double side2;
    double side3;
    
    printf("Enter Adjacent : ", side1); // Ask user to enter Adjacent
    scanf("%lf", &side1); // read Adjacent from user, side1
    printf("Enter Opposite : ", side2); // Ask user to enter Opposite
    scanf("%lf", &side2); // read Opposite from user, side2
    
    side1 *= side1; // compute the side1 
    side2 *= side2; // compute the side2 
    side3 = sqrt(side1 + side2); // compute the side3 
    
    printf("Hypotenuse is %.1lf\n", side3); // Display the result of side3 or Hypotenuse
} 

double toFah(double celsius)
{
    // function to change Celsius to Fahrenheit
    double fahrenheit;
    fahrenheit = (1.8 * celsius) + 32; // compute the Celsius change to Fahrenheit
    return fahrenheit;
}
double toCel(double fahrenheit)
{
    // function to change Fahrenheit to Celsius
    double celsius;
    celsius = (fahrenheit - 32) / 1.8; // compute the Fahrenheit change to Celsius
    return celsius;
}
void temperature()
{
    system("cls"); // clear screen
    printf("[3] Temperature\n\n"); // Display of names exercise
    
    // declare variable
    int i;
    int j;
    double celsius;
    double fahrenheit;
    
    // Display the Celsius Fahrenheit | Fahrenheit Celsius
    printf("%10s%15s%14s%12s\n", "Celsius", "Fahrenheit", " | Fahrenheit", "Celsius"); 
    // loop 180 times
    for(i = 0; i <= 180; i++) 
    {
        if(i <= 100) // if i less than or equal to 100
        {
            // Display of Celsius change to Fahrenheit, 1 Celsius to 100 Celsius
            printf("%10d%15.2lf%3s", i, toFah(i), "|");
            // Display of Fahrenheit change to Celsius, 32 Fahrenheit to 132 Fahrenheit
            printf("%11d%12.2lf\n", i + 32 ,toCel(i + 32));
        }
        if (i > 100) // if i more than 100
        {
            // Display of Fahrenheit change to Celsius, continue 133 Fahrenheit to 212 Fahrenheit
            printf("%28s%11d%12.2lf\n","|" ,i + 32 ,toCel(i + 32));
        }
    }
}
void simpleSort()
{
    system("cls"); // clear screen
    // declare variable
    int i;
    int j;
    int num[4];
    
    printf("[4] Simple Sort\n\n"); // // Display of names exercise
    // loop 4 times
    for ( i = 0; i < 4; i++)
    {
        printf("Enter real numbers %d : ", i + 1); // Ask user to enter real numbers
        scanf("%d", &num[i]); // read real numbers from user, num[i]
    }
    i = 0;
    
    do
    {
        if (num[i] < num[i+1] && i < 4) // if left number less than right number and i less than 4 
        {
            j = num[i]; // j will be left number
            num[i] = num[i+1]; // move right number to left address
            num[i+1] = j; // move left number to right address
            i = 0;
        } 
        else
        {
            i++;
        }
    } while (i < 4);
    printf("Sorting Order Array : "); // Display of Sorting Order Array
    for ( i = 0; i < 4; i++) // loop 4 tines
    {
        printf("%d ", num[i]); // Display of Sorting Order Array
    }
    printf("\n"); // newlines
}
int main()
{
    // declare variable
    int user_input;
    do
    {
        // Display of Exercise and choice
        printf("\n----- Exercise -----");
        printf("\n[1] Built-in Functions");
        printf("\n[2] Hypotenuse");
        printf("\n[3] Temperature conversion");
        printf("\n[4] Simple Sort");
        printf("\n[5] Exit");
        printf("\nSelect a exercise : "); // Ask user to select a exercise
        scanf("%d", &user_input); // read a select a exercise form user, user_input
        if (user_input == 1) // if user_input = 1, do build_in function 
        {
            build_in();
        }
        if (user_input == 2) // if user_input = 2, do hypo function 
        {
            hypo();
        }
        if (user_input == 3) // if user_input = 3, do temperature function 
        {
            temperature();
        }
        if (user_input == 4) // if user_input = 4, do simpleSort function 
        {
            simpleSort();
        }
        if (user_input == 5) // if user_input = 5, break
        {
            break;
        }
    } while (user_input <= 5); // while user_input <= 5, if user_input > 5 out of loop
}
        
            
            
        
            
    

    
        
        
        
    
        
    



    
    
    
    
  
        
