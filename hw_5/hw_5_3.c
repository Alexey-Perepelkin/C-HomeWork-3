#include <stdio.h>

int luckyNumber(int num)
{
    int sum = 0;
    int mult = 1;
    int lastNum;
    while (num > 0)
    {
        lastNum = num % 10;
        sum += lastNum;
        mult *= lastNum;
        num /= 10;
    }
    if (sum == mult)
    {
        return 1;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int num;

    printf("Input number --> ");
    scanf("%d", &num);
    printf("----------------------\n");
    if (luckyNumber(num))
    {
        printf("The intered number %d is lucky",num);
    }
    else
    {
        printf("The intered number %d is  not lucky",num);
    }

    return 0;
}
