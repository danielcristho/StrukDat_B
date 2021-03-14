#include "header.h"

float median1(int array[], int n){

    float median=0;

    // melakukan operasi bilangan
    if (n%2 == 0)
        median = (array[(n-1)/2] + array[n/2])/2.0;

        else   
            median = array[n/2];

    return median;        
}