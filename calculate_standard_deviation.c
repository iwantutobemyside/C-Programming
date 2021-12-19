/**********************************
* (Calculate Standard Deviation)
*
* Create by Thumasorn Prasertsri
* 
*
**********************************/

#include <stdio.h>
#include <math.h>

int main()
{
   // declare variable
   int i;
   int n;
   int dv = 0;
   int data[100];
   double sumOf = 0;
   double x_bar = 0;
   double mean = 0;
   double SD = 0;

   // read element, n
   printf("Enter element : ");
   scanf("%d", &n);
   
   //for loop
   for ( i = 0; i < n; i++)
   {
       scanf("%d", &data[i]); // get element, data[i]
       if (data[i] > 0)
       {
           x_bar += data[i]; // x_bar = x_bar + data[i]
           dv++;
       }
   }
   mean = x_bar / dv;
   // for loop
   for ( i = 0; i < n; i++)
   {
       sumOf += pow(data[i] - mean, 2); 
   }
   
   SD = sqrt(sumOf / dv); // square root(sumOf / dv)
   printf("Standard Deviation = %lf", SD); // show the result
   
   return 0;
}