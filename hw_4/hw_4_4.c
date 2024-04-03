#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, tmpNum, remainder, newNum, count;
    printf("Input number ->>");
    scanf("%d", &num);
    count = 0;
    newNum = 0;
    tmpNum = num;
    while (tmpNum > 0)
    {
        count++;
        tmpNum /= 10;
    }
    tmpNum = num;
    for ( int i = 1; i <= count; i++)
    {
        remainder = tmpNum % 10;
        printf("remainder: %d\n",remainder);
        newNum += remainder;
        tmpNum /= 10;
        if (i == count)
            continue;
        newNum = newNum * 10;
    }

    printf("old number = %d \nnew number = %d", num, newNum);

    return 0;
}
