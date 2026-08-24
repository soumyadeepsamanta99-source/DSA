#include <stdio.h>
int main()
{
    int arr[8]={12,15,9,17,10,22,25,40};
    int n=8;
    int key=40;
    int found=0;
    for (int i=0;i < n;i++)
    {
        if(arr[i]==key)
        {
            printf("Found at position %d\n", i);
            found = 1;
            break;
        }
    }
    if(found == 0)
    {
        printf("Not found\n");
    }
    return 0;
}