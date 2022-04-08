#include <stdio.h>
#include <stdlib.h>
#include "./sort.h"
#include "./printArray.h"
#include "./find.h"

int arr[3] = {3, 1, 10};
int sizeArray = 3;


int main(){
    //printArray function working
    printf("printArray FUNCTION\n");
    printf("my array is: ");
    printf("[");
    printArray(arr, 3);
    printf("]\n");

    //find function working
    int num = arr[3];
    printf("find FUNCTION\n");
    printf("please input the number you want to find: \n");
    scanf("%d", &num);
    int found = linearSearch (arr, sizeArray, num);
    if (found == -1){
    printf("the number is not in the array");
    } 
    else {
        printf("the number is at position %d\n", found);
        }

    //sort function working
    printf("sort FUNCTION\n");
    printf("Array in order: \n");
    printf("[");
    sorting(arr, 3);
    printf("]\n");

    return -1;
}