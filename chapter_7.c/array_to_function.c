#include <stdio.h>
void printarray(int *ptr, int n){
for(int i=0; i<n; i++){
    printf("the value of element %d is %d\n", i+1, *(ptr+i));
}
}

int main(){
    int arr[] = {1,2,3534,34,3,645,23};
    printarray(arr, 7);

    return 0;
}