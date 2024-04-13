#include <stdio.h>
void sort_array(int len, int a[]);
void getArray(int *arr, int len);
void sort_even_odd(int n, int a[])
{
    int countEven = 0;
    int countOdd = 0;
    int evens[n];
    int odds[n];
    int *pEvens;
    int *pOdds;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            evens[countEven++] = a[i];
        }
        else
        {
            odds[countOdd++] = a[i];
        }
    }

    sort_array(countEven, evens);
    sort_array(countOdd, odds);
    pEvens = evens;
    pOdds = odds;
    for (int i = 0; i < countEven; i++)
    {
       a[i]=evens[j++];
    }
    j=0;
     for (int i = countEven; i < n; i++)
    {
       a[i]=odds[j++];
    }
}
void sort_array(int len, int a[])
{
    int tmp;
    for (int i = 0; i < len; i++)
        for (int j = i + 1; j < len; j++)
            if (a[i] < a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
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
    int size = 10;
    int array[10] = {10, 3, 2, 4, 5, 6, 9, 8, 7, 1};
    getArray(array, size);
    sort_even_odd(size, array);
    getArray(array, size);
    return 0;
}
