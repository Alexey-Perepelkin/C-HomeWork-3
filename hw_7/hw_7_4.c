#include <stdio.h>

void getArray(int *arr, int len)
{
    printf("Array = ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void quickSort(int *array, int start, int end)
{
    int left = start;
    int right = end;
    int midSize = (start + end) / 2;

    int middle = array[midSize];

    do
    {
        for (;;)
        {
            if ((array[left] % 10) < middle % 10)
            {
                left++;
            }
            else if ((array[left] % 10) == middle % 10)
            {
                if (array[left] < middle)
                {
                    left++;
                }
                else
                    break;
            }
            else
                break;
        }
        for (;;)
        {
            if ((array[right] % 10) > middle % 10)
            {
                right--;
            }
            else if ((array[right] % 10) == middle % 10)
            {
                if (array[right] > middle)
                {
                    right--;
                }
                else
                    break;
            }
            else
                break;
        }

        if (left <= right)
        {
            if (left < right)
            {
                int buf = array[left];
                array[left] = array[right];
                array[right] = buf;
            }
            left++;
            right--;
        }
    } while (left <= right);

    if (left < end)
    {
        quickSort(array, left, end);
    }
    if (start < right)
    {
        quickSort(array, start, right);
    }
}
int main(int argc, char const *argv[])
{
    int array[10] = {333, 3, 33, 34, 45, 56, 100, 69, 58, 342};
    getArray(array, 10);
    quickSort(array, 0, 10);
    getArray(array, 10);

    return 0;
}
