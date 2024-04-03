#include <stdio.h>

int sum(int a)
{
    int res;
    for (int i = 1; i <= a; i++)
    {
        res += i;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    int num;
    printf("Input number --> ");
    scanf("%d", &num);
    printf("Sum of nubers from 1 to %d --> %d ",num, sum(num));
    return 0;
}
