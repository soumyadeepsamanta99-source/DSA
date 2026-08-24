#include <stdio.h>

int main()
{
    int a[10], n, i, j, choice, temp, key, min;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\n1. Bubble Sort");
    printf("\n2. Selection Sort");
    printf("\n3. Insertion Sort");

    printf("\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            // Bubble Sort
            for(i = 0; i < n-1; i++)
            {
                for(j = 0; j < n-i-1; j++)
                {
                    if(a[j] > a[j+1])
                    {
                        temp = a[j];
                        a[j] = a[j+1];
                        a[j+1] = temp;
                    }
                }
            }
            break;

        case 2:
            // Selection Sort
            for(i = 0; i < n-1; i++)
            {
                min = i;

                for(j = i+1; j < n; j++)
                {
                    if(a[j] < a[min])
                        min = j;
                }

                temp = a[i];
                a[i] = a[min];
                a[min] = temp;
            }
            break;

        case 3:
            // Insertion Sort
            for(i = 1; i < n; i++)
            {
                key = a[i];
                j = i - 1;

                while(j >= 0 && a[j] > key)
                {
                    a[j+1] = a[j];
                    j--;
                }

                a[j+1] = key;
            }
            break;

        default:
            printf("Invalid choice");
            return 0;
    }

    printf("\nSorted array: ");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}