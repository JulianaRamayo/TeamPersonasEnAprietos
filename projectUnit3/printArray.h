int printArray(int arr[], int lenght){
    int i = 0;
   
    void printArray(int myArray[], int lenght){
        while(i < lenght){
            printf("%d", arr[i]);
            if(i < lenght - 1){
                printf(", ");
            }
            i++;
        }
    }
    printArray(arr, lenght);

    return 0;
} 