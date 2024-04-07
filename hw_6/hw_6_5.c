#include <stdio.h>
int acounter(void)
{
    char c;
    scanf("%c", &c);
    if (c == '.')
        return 0;
    else if (c == 'a')
        return acounter() + 1;
    else
        return acounter();
}

int main(int argc, char const *argv[])
{
    printf("%d",acounter());
    return 0;
}
