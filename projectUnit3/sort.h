void sorting(int array[], int lenght){
    int i;
    int j;
    int temp;
       for (i = 0; i < lenght; i ++){
        for (j = 0; j < lenght - 1; j ++){
            if (array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
        printf("%d", array[i]);   
        if(i<2){
            printf(", ");
            }
    }
} 