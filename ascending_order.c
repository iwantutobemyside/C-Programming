/**********************************
* Ascending order
*
* Create by Thumasorn Prasertsri
* 
*
**********************************/

#include <stdio.h>
#define SIZE 10

void bubbleSort(int * const array, size_t size);

int main(void)
{
    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    size_t i; // counter
    puts("Data items in original order");

    // loop array a
    for ( i = 0; i < SIZE; ++i)
    {
        printf("%4d", a[i]);
    } // end loop for
    
    bubbleSort(a, SIZE); // sort the array
    puts("\nData items in ascending order");
    
    // loop array a
    for ( i = 0; i < SIZE; ++i)
    {
        printf("%4d", a[i]);
    }
    puts("");
}

// sort an array of integers using bubble sort
void bubbleSort(int * const array, size_t size)
{
    void swap(int *element1Ptr, int *element2Ptr);
    unsigned int pass; // pass counter
    size_t j; // comparison counter

    // loop to control passes
    for ( pass = 0; pass < size - 1; ++pass)
    {
        // loop to control comparisons during each pass
        for ( j = 0; j < size - 1; ++j)
        {
            // swap elements 
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
            } 
        } 
    }
}

// swap values at memory locations to which element1Ptr and element2Ptr point
void swap(int *element1Ptr, int *element2Ptr)
{
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}