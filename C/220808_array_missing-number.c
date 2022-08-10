/******************************************************************************

Monday, August 8, 2022

Given an array with all integers between 1 and 10 except for one replaced by 0, find the missing number.

*******************************************************************************/
#include <stdio.h>

typedef struct Array 
{
    int A[1000];
    int size;
    int length;
} my_array;

int isMissing(my_array arr);

int main()
{
    int i, j, sum, x;
    my_array arr = {{0}, 100, 10};
    for(i = 0; i < arr.length; i++)
    {
        arr.A[i] = i + 1;
    }
    
    for(i = 0; i < arr.length; i++)
    {
        printf("%d\n", arr.A[i]);
    }
    
    arr.A[3] = 0;
    
     for(i = 0; i < arr.length; i++)
    {
        printf("%d\n", arr.A[i]);
    }
    
    x = isMissing(arr);
    
    printf("Missing term: %d", x);

    return 0;
}


int isMissing(my_array arr)
{
    int i, j, sum, x;
    sum = 0;
    j = 0;
    for(i = 0; i < arr.length; i++)
    {
        sum += arr.A[i];
        // add j++ to j 
        j += i + 1;
    }
    
    // subtract sum from J
    x = j - sum;
    return x;
    // return the difference    
}

