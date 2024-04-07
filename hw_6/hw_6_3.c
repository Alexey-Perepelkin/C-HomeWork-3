#include <stdio.h>

void dec_to_bin(int a)
{
    int d;
    if (a < 1)
        return;
    d = a % 2;
    dec_to_bin(a /= 2);
    printf("%d", d);
}
int col(int a)
{
    int d;
    if (a < 1)
        return 0;
    d = a % 2;
    return d + col(a /= 2);
}

int main(int argc, char const *argv[])
{
    printf("Imput number--> ");
    int num;
    scanf("%d", &num);
    dec_to_bin(num);
    printf("\n");
    printf("%d", col(num));
    return 0;
}
