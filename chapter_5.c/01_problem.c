#include <stdio.h> 

float average(int a,int b, int c);
int main(){
    int a,b,c;
    printf("enter hte value of a\n");
    scanf("%d",&a);
        printf("enter hte value of b\n");
    scanf("%d",&b);
        printf("enter hte value of c\n");
    scanf("%d",&c);
    printf("the value of averageis %f", average(a,b,c));
 return 0;
}


float average(int a,int b, int c){
    float result;
    result =(float)( a+b+c)/3;
    return result;
}