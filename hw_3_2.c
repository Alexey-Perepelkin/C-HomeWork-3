#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c, d, e;
    int min;
    printf("Input numbers:\n");

    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    printf("c = ");
    scanf("%d", &c);

    printf("d = ");
    scanf("%d", &d);

    printf("e = ");
    scanf("%d", &e);
    min = a;
    min = min < b ?: b;
    min = min < c ?: c;
    min = min < d ?: d;
    min = min < e ?: e;

    printf("min number = %d", min);

    return 0;
}