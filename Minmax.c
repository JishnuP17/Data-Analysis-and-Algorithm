#include <stdio.h>

int min, max;

void MinMax(int arr[], int low, int high)
{
    int mid;
    int min1, max1;
    if (low == high)
    {
        min = max = arr[low];
        return;
    }
    if (high == low + 1)
    {
        if (arr[low] < arr[high])
        {
            min = arr[low];
            max = arr[high];
        }
        else
        {
            min = arr[high];
            max = arr[low];
        }
        return;
    }

    mid = (low + high) / 2;

    MinMax(arr, low, mid);
    min1 = min;
    max1 = max;

    MinMax(arr, mid + 1, high);

    if (min < min1)
        min = min;
    else
        min = min1;

    if (max > max1)
        max = max;
    else
        max = max1;
}

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    MinMax(arr, 0, n - 1);

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

    return 0;
}
