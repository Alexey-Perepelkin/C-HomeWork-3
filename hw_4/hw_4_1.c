#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, sq, sum;
    int start, end;
    char choice;
    while (1)
    {
        printf("1.Input numbers\n");
        printf("0. Exit\n");
        printf("Input number menu --> \n");
        scanf("%c", &choice);
        switch (choice)
        {
        case '1':
            printf("Input tow numbers, where a<=b. Between 1 to 100\n");
            scanf("%d%d", &a, &b);
            start = a;
            end = b;
            if (start <= end && end <= 100)
            {
                while (start <= end)
                {
                    sq = start * start;
                    sum = sum + sq;
                    start++;
                }
                printf("Summa = %d", sum);
                return 0;
            }
            else
            {
                printf("Incorrect data\n");
                printf("\n");
            }
            break;
        case '0':
            printf("Goodbye !!!\n");
            return 0;
            break;
        default:
            printf("Incorrect data\n");
            printf("\n");
            break;
        }
    }

    return 0;
}