
int linearSearch(int arr[], int sizeArray, int valueToFind){
    
    int b = 0;

    for  (int i = 0; i < sizeArray; i++){

    if (arr[i] == valueToFind){
        b = i;

            break;
        }
    }
    return b;
};


