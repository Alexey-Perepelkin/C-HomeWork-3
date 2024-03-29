#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, count;

    printf("Input number--> ");
    scanf("%d", &num);
    while (num  > 0)
    {
        count++;
        num = num / 10;
    }
    if (count == 3)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}