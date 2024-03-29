#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c, d, e;
    int max;
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
    max = a;
    max = max > b ?: b;
    max = max > c ?: c;
    max = max > d ?: d;
    max = max > e ?: e;

    printf("MAX number = %d", max);

    return 0;
}