#include <stdio.h>
#include "./max.h"
#include "./min.h"

int arr[3] = {3, 1, 10};

int main(){
    int indexMax = max(arr, 3);
    //otras llamadas;
    printf("max value: %d\n", arr[indexMax]);

    int indexMin = min(arr, 3);
    printf("min value: %d\n", arr[indexMin]);

    return 0;
}