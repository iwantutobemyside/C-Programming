/**********************************
* Program find all roots of a Quadratic equation
*
* Create by Thumasorn Prasertsri
* 
*
**********************************/

#include <math.h>
#include <stdio.h>

int main()
{
    // variable declarations
    double a;
    double b;
    double c;
    double root1;
    double root2;
    double determinant;
    double realp;
    double imgp; 
    
    printf("Enter coefficients a,b,c : ");  // prompt the user
    scanf("%lf %lf %lf", &a, &b, &c);
    
    determinant = b*b-4*a*c; // value of determinant
    if(determinant > 0) // condition for real and different roots
    {
        root1 = (-b + sqrt(determinant)) / (2*a);
        root2 = (-b - sqrt(determinant)) / (2*a);
        printf("root1 = %.2lf \nroot2 = %.2lf",root1,root2); // print the calculated
    }
    
    else if (determinant == 0) // condition for real and equal roots
    {
        root1 = root2 = -b / (2*a);
        printf("root1 = root2 = %.2lf",root1); // print the calculated
    }
    
    else // if roots are not real
    {
        realp = -b / (2*a);
        imgp = sqrt(-(determinant)) / (2*a);
        printf("root1 = %.2lf + %.2lfi \ni and root2 = %.2lf - %.2lfi",realp,imgp,realp,imgp); // print the calculated
    }
    
    return 0; // indicate that program ended successfully
}












