#include <stdio.h>

void recurse(int a, int b)
{
    if (a == b)
    {
        printf("%d", a);
        return;
    }
    printf("%d ", a);
    if (a > b)
        a--;
    else
        a++;
    recurse(a, b);
}

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Input number --> ");
    scanf("%d%d", &a, &b);

    recurse(a, b);
   
    return 0;
}
