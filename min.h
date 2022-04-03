#include <stdio.h>
#include "./min.h"

int arr[4] = {23, 6, 15, 7};
int main (){
    printf("Min Value: %d\n",arr[min(arr,4)]);
    return 0;
}
