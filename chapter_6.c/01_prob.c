#include <stdio.h> 

int main(){
int a;
int *ptr;
ptr = &a;

printf("the address of variabe a is %d\n",a);
printf("the address of variabe a is %d\n",ptr);
printf("the address of variabe a is %d\n",*ptr);
    return 0;
}