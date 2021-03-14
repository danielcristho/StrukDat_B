#include "header.h"
void compare(struct lenght panjang1, struct lenght panjang2){   //Parameter yang digunakan adalah struct panjang1 dan panjang2    

    if(panjang1.m>panjang2.m){                                  //Bila panjang1 yang meter > panjang2 yang meter,
        printf("Length 1 is greater than Length 2\n");          //otomatis panjang1 lebih panjang


    }else if(panjang1.m==panjang2.m){                 
        if(panjang1.cm>panjang2.cm) {                   
            printf("Length 1 is greater than Length 2\n");  
    }else if(panjang1.cm==panjang2.cm){                 
        printf("Length 1 is equal with Length 2\n");
    } else printf("Length 1 is smaller than Length 2\n");   
    }
    else printf("Length 1 is smaller than Length 2\n");
}
