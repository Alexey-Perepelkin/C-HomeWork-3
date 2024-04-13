#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void setArray(int len, int *arr, int bottom, int top)
{
    int bottomNum = bottom;
    int topNum = top;
    for (int i = 0; i < len; i++)
    {
        arr[i] = bottomNum + rand() % (topNum - bottomNum + 1);
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

int find_max_array(int size, int a[])
{
    int max = a[0];
    for (int i = 0; i < size - 1; i++)
        if (a[i] < a[i + 1])
        {
            max = a[i + 1];
        }
    return max;
}

int main(int argc, char const *argv[])
{
    int arr[SIZE];
    setArray(SIZE, arr, 0, 1);
    getArray(arr, SIZE);
    printf("Max number = %d", find_max_array(SIZE, arr));
    return 0;
}
