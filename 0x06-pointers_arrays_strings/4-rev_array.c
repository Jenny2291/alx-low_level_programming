#include <stdio.h>

/* Function to reverse the content of an array of integers */
void reverse_array(int *a, int n)
{
    int temp, i, j;

    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        /* Swap elements a[i] and a[j] */
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverse_array(arr, n);

    printf("Reversed array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
