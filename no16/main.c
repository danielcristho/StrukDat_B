/* 
    Ditulis oleh : 
    Nama: Gloriyano C Daniel Pepuho
    nrp : 5025201121

    tanggal pembuatan : 10 Apr 2021

    Problem : bagaimana cara mengimplementasikan sebuah queue pada dua stack

    Analisis : pertama, melakukan input angka pada queue, kemudian melakukan pengurutan pada queue
               dimulai dari data yang paling pertama, sehingga jika di tampilkan maka di urutkan dari
               data yg pertama kali di input. Jika ingin menghapus data pada queue, maka yang di hapus adalah
               data yang pertama kali di inputkan.
    Design : 
           1. deklarasikan variabel
           2. membuat stack yang berisi stack1&stack2
           3. dapatkan data dari tiap angka yang di inputkan
           4. mengurutkan angka yang di inputkan
           5. menampilkan isi queue
           6. menghapus angka dari queue jika tidak di ingnikan yang di mulai angka yang pertama
              kali di inputkan. 
    Output :
            
            enter ur choice: 
            1.add to queue: 
            2.remove from queue: 
            3.display: 
            4.exit: 
            3 // menu menampilkan isi quque

            90  //isi dari quque
            60  //isi dari quque   
            33  //isi dari quque


 //IMPLEMENTASI :

*/
# include "header.h" //include file header
// protipe fungsi
void push(struct node** top, int data);
int pop(struct node** top);
struct queue
{
    struct node *stack1;
    struct node *stack2;
};
void enqueue(struct queue *q, int x)
{
    push(&q->stack1, x);
}
void dequeue(struct queue *q)
{
    int x;
    if (q->stack1 == NULL && q->stack2 == NULL) {
        printf("queue is empty");
        return;
    }
    if (q->stack2 == NULL) {
        while (q->stack1 != NULL) {
        x = pop(&q->stack1);
        push(&q->stack2, x);
        }
    }
    x = pop(&q->stack2);
    printf("%d\n", x);
}
void push(struct node** top, int data)
{
    struct node* newnode = (struct node*) malloc(sizeof(struct node));
        if (newnode == NULL) {
            printf("Stack overflow \n");
            return;
        }
    newnode->dataQue = data;
    newnode->next = (*top);
    (*top) = newnode;
}
int pop(struct node** top)
{
    int buff;
    struct node *t;
    if (*top == NULL) {
        printf("Stack underflow \n");
        return 0;
    }
    else {
        t = *top;
        buff = t->dataQue;
        *top = t->next;
        free(t);
        return buff;
    }
}
void display(struct node *top1,struct node *top2)
{
    while (top1 != NULL) {
        printf("%d\n", top1->dataQue);
        top1 = top1->next;
    }
    while (top2 != NULL) {
        printf("%d\n", top2->dataQue);
        top2 = top2->next;
    }
}
int main()
{
    struct queue *q = (struct queue*)malloc(sizeof(struct queue));
    int f = 0, a;
    char ch = 'y';
    q->stack1 = NULL;
    q->stack2 = NULL;
    while (ch == 'y'||ch == 'Y') {
        printf("enter your number: \n1.add to queue: \n2.remove from queue: \n3.display: \n4.exit: \n");
    
        scanf("%d", &f);
        switch(f) {
            case 1 : printf("enter the element to be added to queue: \n");
                     scanf("%d", &a);
                     enqueue(q, a);
                     break;
            case 2 : dequeue(q);
                     break;
            case 3 : display(q->stack1, q->stack2);
                     break;
            case 4 : exit(1);
                     break;
            default : printf("invalid\n");
                      break;
        }
    }
}