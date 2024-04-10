#include <stdio.h>
#include <locale.h>
#include <conio.h>

void getArray(int *arr, int len)
{
    printf("Array = ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *arrFirst, int *arrSecond)
{
    int *temp = arrFirst;
    arrFirst = arrSecond;
    arrSecond = arrFirst;
}

void setArray(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int minNum(int *arr, int len)
{
    int min = 0;
    for (int i = 1; i < len; i++)
    {
        if (arr[i] < arr[min])
            min = i;
    }
    return arr[min];
}
int main(int argc, char const *argv[])
{
    int array[5] = {1, 3, 5, -4, 8};
    getArray(array, 5);
    printf("Min number = %d", minNum(array, 5));
    return 0;
}
