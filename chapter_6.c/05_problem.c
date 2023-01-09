#include <stdio.h> 

int main(){
 int a = 8899;
  int *ptr;
  int **ptr_ptr;
  ptr = &a;
  ptr_ptr =&ptr;

printf("the value of ais %d", **ptr_ptr);
    return 0;
}