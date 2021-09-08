#for my slides

#include<stdio.h>
// PUSH OPERATION
void push(char element, 
          char stack[], 
          int *top, 
          int isSize){

 if(*top == -1){
  stack[isSize - 1] = element;
  *top = isSize - 1;
 }
 else if(*top == 0){
  printf("The stack is full. \n");
 }
 else{
  stack[(*top) - 1] = element;
  (*top)--;
 }
}
//POP OPERATION
void pop(char stack[],
         int *top,  
         int stackSize){

 if(*top == -1){
   printf("The stack is empty. \n");
 }
 else{
  printf("Element popped: %c \n", stack[(*top)]);
  
  if((*top) == stackSize - 1){
    (*top) = -1;
  }
  else{
    (*top)++;
  }
 }
}
int main() {
  int stackSize = 4;
  char stack[stackSize];
  int top = -1;
  push('10', stack, &top, stackSize);
  printf("Element on top: %c\n", stack[top]);
  push('20',stack, &top, stackSize);
  printf("Element on top: %c\n", stack[top]);
  pop(stack, &top, stackSize);
  printf("Element on top: %c\n", stack[top]);
  pop(stack, &top, stackSize);
  printf("Top: %d\n", top);
  pop(stack, &top, stackSize);
  return 0;
}
