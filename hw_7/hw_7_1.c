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

void setArray(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        scanf("%d", arr[i]);
    }
}
void arithmeticalMean(int *arr, int len)
{
    float res = 0;

    for (int i = 0; i < len; i++)
    {
        res += arr[i];
    }
    printf("Arithmetical mean = %.3f\n", res / len);
}

int main(int argc, char const *argv[])
{
    int array[5] = {1, 3, 5, 7, 8};

    getArray(array, 5);
    arithmeticalMean(array, 5);
    return 0;
}
