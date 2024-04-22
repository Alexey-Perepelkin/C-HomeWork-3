#include <stdio.h>
#include <string.h>

#define IN_FILE "input.txt"
#define OUT_FILE "output.txt"

int pickNums(char *str, int nums[])
{
    int i = 0, j = 0, num = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            while (str[i] >= '0' && str[i] <= '9')
            {
                num = num * 10 + (str[i] - 48);
                ++i;
            }
            nums[j++] = num;
            num = 0;
        }
        ++i;
    }
    return j;
}
void sortAscend(int a[], int size)
{
    int i, j;
    for (j = 1; j < size; ++j)
        for (i = 0; i < size - j;
             ++i)
            if (a[i] > a[i + 1])
            {
                a[i] = a[i] ^ a[i + 1];
                a[i + 1] = a[i] ^ a[i + 1];
                a[i] = a[i] ^ a[i + 1];
            }
}
int main()
{
    char name_in[] = IN_FILE;
    char name_out[] = OUT_FILE;
    FILE *f_in = fopen(name_in, "r");
    FILE *f_out = fopen(name_out, "w");
    int i, size;
    int nums[500];
    char str[1002];
    fgets(str, 1000,
          f_in);

    size = pickNums(str, nums);
    sortAscend(nums, size);
    for (i = 0; i < size; ++i)
        fprintf(f_out, "%d ", nums[i]);
    fclose(f_in);
    fclose(f_out);
    return 0;
}