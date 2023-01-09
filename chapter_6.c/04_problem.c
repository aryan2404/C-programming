#include <stdio.h>
void sumAndavg (int a, int b, int *sum, float *avg){
 *sum = a + b ;
*avg = (*sum/2);
}

int main(){
    int i ,j ,sum ;
    float avg;
    i=4;
    j=5;
    sumAndavg(i,j,&sum, &avg);
    printf("the value of sum is %d\n" ,sum);
     printf("the value of sum is %f\n" ,avg);

    return 0;
}