#include <stdio.h>
void wrong_swap(int x, int y); 
void swap(int*x ,int*y);

int main(){
int a=3, b=7;
printf("the value of aand b before swap is %d and %d\n", a , b);
//wrong_swap(a,b);//will not work due to call by value
swap(&a ,&b);//will work due to call by reference
printf("the value of aand b after swap is %d and %d\n", a , b);


    return 0;
}

void wrong_swap(int x , int y){
    int temp;
    temp = x;
    x=y;
    y=temp;
}
void swap(int *x ,int *y){
    int temp;
    temp = *x;
    *x=* y;
   * y = temp;

}