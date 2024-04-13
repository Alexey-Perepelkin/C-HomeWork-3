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
void change_max_min(int size, int a[])
{
    int min = 0;
    int max = 0;
    for (int i = 0; i < size ; i++)
    {
        if (a[i] > a[i + 1])
            max = i;
        else if (a[i] < a[i + 1])
            min = i;
    }
    int tmp =a[min];
    a[min]=a[max];
    a [max]=tmp;

}

int main(int argc, char const *argv[])
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    getArray(arr,10);
    change_max_min(10,arr);
    getArray(arr,10);
    return 0;
}
