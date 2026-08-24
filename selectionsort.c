#include<stdio.h>
void selectionSort(int array[], int size)
{
    int step, i, minIdx, temp;

    for (step = 0; step < size - 1; step++)
    {
        minIdx = step;

        for (i = step + 1; i < size; i++)
        {
            if (array[i] < array[minIdx])
            {
                minIdx = i;
            }
        }

        temp = array[minIdx];
        array[minIdx] = array[step];
        array[step] = temp;
    }
}

int main()
{
    int array[] = {7, 5, 4, 2, 3, 9, 6};
    int size = sizeof(array) / sizeof(array[0]);
    int i;

    selectionSort(array, size);

    printf("Sorted array:\n");

    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}