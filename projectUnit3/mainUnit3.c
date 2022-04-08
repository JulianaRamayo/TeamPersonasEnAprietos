#include <stdio.h>
#include "./sort.h"
#include "./printArray.h"
#include "./find.h"

int arr[3] = {3, 1, 10};

int main(){
    //printArray function working
    printf("my array is: ")
    printf("[");
    printArray(arr, 3);
    printf("]");

    return 0;
}