#include <stdio.h>
float force(float mass); 

int main(){
    float m;
    printf("enter the value of mass in kg\n");
    scanf("%f",&m);
     printf(" the value of force in newton is%f \n" ,force(m));
    scanf("%f",&m);

    return 0;
}
float force(float mass){
    float result =mass*9.8;
    return result;
}