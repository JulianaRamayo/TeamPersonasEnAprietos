#include <stdio.h>
#include "./max.h"
#include "./min.h"
#include "./odd.h"

int arr[lenght] = {3, 1, 10};

int main(){
    int indexMax = max(arr);
    //otras llamadas;
    printf("max value: %d\n", arr[indexMax]);

    return 0;
}