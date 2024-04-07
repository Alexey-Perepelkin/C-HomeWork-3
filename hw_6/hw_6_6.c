#include <stdio.h>

int recurs_power(int n, int p)
{
    int res;
    if (p == 0)
        return 1;
    return n * recurs_power(n, --p);
}
int main(int argc, char const *argv[])
{
    int a, b;
    printf("Input number --> ");
    scanf("%d %d", &a, &b);
    printf("%d", recurs_power(a, b));
    return 0;
}
