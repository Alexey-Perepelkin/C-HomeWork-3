#include <stdio.h>

int NOD(int a, int b)
{
    while (a != 0 && b != 0)
    {
        if (a > b)
            a = a % b;

        else
            b = b % a;
    }
    return (a + b);
}

int main(int argc, char const *argv[])
{
    int a,b;
 printf("Input numbers --> ");
    scanf("%d%d", &a,&b);
    printf("Result = %d", NOD(a,b));
    return 0;
}
