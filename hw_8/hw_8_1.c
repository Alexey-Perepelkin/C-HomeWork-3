#include <stdio.h>

void sort_array(int size, int a[])
{
    int tmp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

void getArray(int *arr, int len)
{
    printf("Array = ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int array[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    getArray(array, 10);
    sort_array(10, array);
    getArray(array, 10);
    return 0;
}
