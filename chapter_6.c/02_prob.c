#include <stdio.h>
void printAdd(int a){
    printf("the address of variable a is %u",&a);
    } 

int main(){
int i = 4;
printf("the value of variabe i is %d\n", i);
printAdd(i);
printf("the address of variabe i is %d\n",& i);
    return 0;
}