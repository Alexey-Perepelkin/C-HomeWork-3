#include <stdio.h>

void print_num(int num)
{
    if (num > 0)
    {

        print_num(num / 10);
        printf("%d ", num % 10);
    }
}

int main(int argc, char const *argv[])
{
    printf("Imput number--> ");
    int num;
    scanf("%d", &num);
    print_num(num);
    return 0;
}
