/* library */
#include<stdio.h>
struct date {
 int dd, mm, yy;
};
/* protoipe fungsi */ 
int date_cmp(struct date d1, struct date d2);
void date_print(struct date d);
 /* Struct (include dates)*/
 struct date d1 = {13, 03, 2021};
 struct date d2 = {27, 11, 2022};