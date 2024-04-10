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

        while (array[left] < middle)
        {
            left++;
        }

        while (array[right] > middle)
        {
            right--;
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
int number(int *arr, int len)
{
    int count1 = 1;
    int countMax = 0;
    int num = arr[0];
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count1++;
        }
        else if (count1 > countMax)
        {
            countMax = count1;
            num = arr[i];
        }
    }
    if (countMax == 1)
    {
        return 0;
    }
    else
        return num;
}
int main(int argc, char const *argv[])
{
    int array[10] = {1, 3, 20, 4, 25, 5022, 2, 7, 605};
    getArray(array, 10);
    quickSort(array, 0, 10);
    getArray(array, 10);
    if (!number(array, 10))
        printf("No repeating number !");
    else
        printf("Number --> %d ", number(array, 10));
    return 0;
}
