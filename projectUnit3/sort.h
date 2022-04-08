void sorting(int arr[], int lenght)
{
    int a;
    int b;
    for (int x = 0; x < lenght; x++)
    {
        for (int i = 0; i < lenght; i++)
        {
            a = arr[i];
            b = arr[i + 1];
            if (a > b)
            {
                arr[i + 1] = a;
                arr[i] = b;
            }
        }
    }
    for (int i = 0; i < lenght; i++)
    {
        printf(" %d ",arr[i]);
    }
}