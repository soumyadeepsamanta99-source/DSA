#include <stdio.h>

void bubbleSort(int data[], int size)
{
    int step, i, temp;

    for (step = 0; step < size - 1; step++)
    { if (step==1){
        break;
    }
        for (i = 0; i < size - step - 1; i++)
        {
            if (data[i] > data[i + 1])
            {
                temp = data[i];
                data[i] = data[i + 1];
                data[i + 1] = temp;
            }
        }
        for (i = 0; i < size; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");

    }
}
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
    int data[] = {6, 4, 7, 8, 1, 9, 5};
    int size = sizeof(data) / sizeof(data[0]);
    int i;

    bubbleSort(data, size);

    printf("Sorted array:\n");

    for (i = 0; i < size; i++)
    {
        printf("%d ", data[i]);
    }

    return 0;
}