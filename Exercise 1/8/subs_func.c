#include "header.h"
int substract(struct lenght panjang1, struct lenght panjang2){
    int meter1 = panjang1.meter * 100, meter2 = panjang2.meter * 100;   // mengalikan nilai pada meter dengan 100      
    int total1 = meter1 + panjang1.centi, total2 = meter2 + panjang2.centi;   
    int kurang = total1-total2;                                         // mengurangi total1&total2
    abs(kurang);                                                           
    return kurang;                                                          
}