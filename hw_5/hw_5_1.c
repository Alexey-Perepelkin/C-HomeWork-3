#include <stdio.h>

int operation_I_(int num)
{
    int res = 1;
    if (num != 1)
    {
        for (int i; i < num; i++)
        {
            res = 2 * res;
        }
    }
    return res;
}
int main(int argc, char const *argv[])
{
    int number;
    printf("Input number call --> ");
    scanf("%d", &number);
    printf("Result = %d", operation_I_(number));
    return 0;
}
