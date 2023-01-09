// #include<stdio.h>

// int main()
// {
//     int radius=4;
//     float pi=3.14;
// int  area=3.14*4*4;
//     printf("the area of circle is%f \n",pi*radius*radius);
  
// }
#include<stdio.h>

int main(){
    int radius=5;
    int height=6;
    float pi=3.14;
    int area=2*pi*radius*(height+radius);
    printf("the area of cylinder%f \n",pi*radius*radius*height);
    
    return 0;
}