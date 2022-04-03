#include <stdio.h>
#include "./max.h"

int arr[4] = {23, 6, 15, 7};
int main (){
    printf("Max Value: %d\n",arr[max(arr,4)]);
    return 0;
}


