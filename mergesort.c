#include <stdio.h>

void merge(int arr[], int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for(int i = 0; i < n1; i++)
    {
        L[i] = arr[p + i];
    }

    for(int j = 0; j < n2; j++)
    {
        M[j] = arr[q + 1 + j];
    }

    int i, j, k;

    i = 0;
    j = 0;
    k = p;

    while(i < n1 && j < n2)
    {
        if(L[i] <= M[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = M[j];
            j++;
        }

        k++;
    }

    while(i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j < n2)
    {
        arr[k] = M[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

int main()
{
    int arr[] = {8, 4, 3, 1, 6, 9, 7, 5};
    int n = 8;
    int i;
    

    mergeSort(arr, 0, n - 1);

    printf("Sorted Array: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}