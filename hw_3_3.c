#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Input numbers:\n");

    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    printf("c = ");
    scanf("%d", &c);
    if (a < b && b < c)
    {
        printf("YES");
    }
    else
    {
       printf("NO");
    }
  

    return 0;
}