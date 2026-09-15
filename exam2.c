#include <stdio.h>

void bubbleOnePass(int arr[], int n)
{
    int j, temp;
    

    for(j = 0; j < n - 1; j++)
    {
        if(arr[j] > arr[j + 1])
        {
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
}

void selectionSort(int arr[], int n)
{
    int i, j, min, temp;

    for(i = 0; i < n - 1; i++)
    {
        min = i;

        for(j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min])
                min = j;
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main()
{
    int arr[10];
    int i;

    printf("Enter 10 elements:\n");

    for(i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    
    bubbleOnePass(arr, 10);

    printf("\nAfter one Bubble Sort pass:\n");

    for(i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    
    selectionSort(arr, 10);

    printf("\n\nAfter Selection Sort:\n");

    for(i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    return 0;
}