#include<stdio.h>
void insertionSort(int array[],int size){
    for(int step=1;step<size;step++){
        int key = array[step];
        int j=step-1;
        while(j>=0 && key<array[j]){
            array[j+1]=array[j];
            --j;
        }
        array[j+1]=key;
        for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    }
}
int main()
{
    int array[] = {6, 4, 7, 8, 1, 9, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int i;

    insertionSort(array, size);

    printf("Sorted array:\n");

    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}