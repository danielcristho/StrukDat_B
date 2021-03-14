#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi
/*
 * Mencari nama dalam array of struct
 */
int BinSearch(int n, contact c[], char key[])
 {
     int i,low,high,mid;
     low=0;
     high=n-1;
     while(low<=high)
     {
         mid=(low+high)/2;
         if (strcmp(key,c[mid].name)==0)
         {
             printf("%s\n",c[mid].num);
             return mid;
                    //exit(0);
         }
         else if(strcmp(key,c[mid].name)>0)
         {
             high=high;
             low=mid+1;
         }
         else
         {
             low=low;
             high=mid-1;
         }
     }
     printf("name not found\n");
}
