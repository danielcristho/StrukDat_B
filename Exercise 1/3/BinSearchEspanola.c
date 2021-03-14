#include "header.h" // user defined library berisi deklarasi struct, preprocessor directives dan prototipe fungsi
/*
 * Mencari kata-kata bahasa Spanyol dalam array of struct
 */
int BinSearchEsp(int n, word a[], char key[])
 {
     int i,low,high,mid;
     low=0;
     high=n-1;
     while(low<=high)
     {
         mid=(low+high)/2;
         if (strcmp(key,a[mid].spn)==0)
         {
             printf("%s\n",a[mid].eng);
             return mid;
                    //exit(0);
         }
         else if(strcmp(key,a[mid].spn)>0)
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
     printf("word not found\n");
}
