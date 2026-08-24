#include <stdio.h>

int main()
{
    int a[] = {7, 5, 4, 2, 3};
    int n = 5;
    int i, j, key;

    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;

        printf("Iteration %d: ", i);
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[j]);
        }
        printf("\n");
    }

    return 0;
}