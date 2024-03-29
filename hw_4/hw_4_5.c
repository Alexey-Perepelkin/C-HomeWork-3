#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    int sum = 0;
    int mult = 1;
    int numTmp ;
    int lastNum ;

    printf("Input number --> ");
    scanf("%d", &num);
    printf("----------------------\n");
    printf("Old number --> %d\n", num);
    printf("Happy number(s) --> ");
    for (int i = 10; i <= num; i++)
    {
        numTmp = i;
        while (numTmp > 0)
        {
            lastNum = numTmp % 10;
            sum += lastNum;
            mult *= lastNum;
            numTmp /= 10;
        }
        if (sum == mult)
        {
            printf("%d ", i);
        }
        sum = 0;
        mult = 1;
    }

    return 0;
}
