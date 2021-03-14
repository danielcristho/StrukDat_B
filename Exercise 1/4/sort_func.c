#include "header.h"

void sort_function(int array[], int n){

    int b=0, j=0, temp=0;

    for(b=0 ; b<n ; b++); {

        for(j=0 ; j<n-1 ; j++){

            if(array[j]>array[j+1]){

                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }

        }
    }

    printf("\nThe array is:\n");
    for(b=0 ; b<n ; b++){
        printf("\n%d",array[b]);
    }
}
