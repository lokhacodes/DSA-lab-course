#include <stdio.h>

int main()
{
    int n, i, a[100];
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Array is: \n");
    for (i = 0; i < n; i++)
    {
        printf("A[%d] = %d\n", i, a[i]);
    }
    return 0;
}