#include "header.h"
int sum(struct lenght panjang1, struct lenght panjang2){
    int meter1 = panjang1.meter * 100, meter2 = panjang2.meter * 100; // mengalikan nilai pada hasil meter dengan 100        
    int total1 = meter1 + panjang1.centi, total2 = meter2 + panjang2.centi;   
    int jumlah = total1+total2; // menjumlahkan total1&total2(dalam satuan cm)                         
    return jumlah;                                                          
}