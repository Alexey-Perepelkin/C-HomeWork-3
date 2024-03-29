#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, lastNum;

    printf("Input number--> ");
    scanf("%d", &num);
    while (num  > 0)
    {
        lastNum = num % 10;
        if (lastNum % 2 == 0)
        {
            num = num / 10;
        }
        else
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
