#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

void setArray(int len, int arr[], int bottom, int top)
{
    for (int i = 0; i < len; i++)
        arr[i] = bottom + rand() % (top - bottom + 1);
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
int is_two_same(int size, int a[])
{

    for (int i = 0; i < size; i++)
        for (int j = i + 1; j < size; j++)
            if (a[i] == a[j])
                return 1;
    return 0;
}
int main(int argc, char const *argv[])
{
    int arr[SIZE];
    setArray(SIZE, arr, 0, 10);
    getArray(arr, SIZE);
    if (is_two_same(SIZE, arr))
        printf("YES");
    else
        printf("NO");
    return 0;
}
