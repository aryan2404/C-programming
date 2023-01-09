#include <stdio.h> 
void display();//function prototype

int main(){
int a;
printf("Initializng display function\n");
display();//function call
printf("display function finished its work\n");

    return 0;
}
//function defination
void display(){
    printf("this is display\n");
}