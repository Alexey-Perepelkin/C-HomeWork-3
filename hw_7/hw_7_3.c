#include <stdio.h>
#define ARR_SIZE 12
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
    int array[ARR_SIZE] = {1, 2, 3, 4, 11, 22, 33, 44, 111, 222, 333, 444};
    getArray(array, ARR_SIZE);
    for (int j = 0; j < ARR_SIZE / 3; j++)
    {
        int tmp = array[0];
        for (int i = 0; i < ARR_SIZE - 1; i++)
        {
            array[i] = array[i + 1];
        }
        array[ARR_SIZE - 1] = tmp;
    }
    getArray(array, ARR_SIZE);
    return 0;
}
