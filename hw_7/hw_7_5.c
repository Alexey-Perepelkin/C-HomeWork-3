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

int main(int argc, char const *argv[])
{
    int array[10] = {1, 102, 1203, 1013, 402202, 5022, 6, 7, 605};
    int array2[10] = {0};
    int count = 0;
    getArray(array, 10);
    for (int j = 0; j < 10; j++)
    {
        int num = array[j];
        num /= 10;
        if (num > 0 && num % 10 == 0)
        {
            array2[count] = array[j];
            count++;
        }
    }
    getArray(array2, count - 1);
    return 0;
}
