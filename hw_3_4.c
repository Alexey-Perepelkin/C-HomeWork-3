#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;

    printf("Inter mounth number: \n");
    scanf("%d", &num);
    if (num < 1 || num > 12)
    {
        printf("There is no such month");
    }
    else
    {
        if (num >= 1 && num <= 2 || num == 12)
        {
            printf("winter");
        }
        else if (num >= 3 && num <= 5)
        {
            printf("spring");
        }
        else if (num >= 6 && num <= 8)
        {
            printf("summer");
        }
        else if (num >= 9 && num <= 11)
        {
            printf("autumn");
        }
    }
    return 0;
}
