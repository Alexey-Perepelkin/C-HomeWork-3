#include <stdio.h>
int countForvardParenthesis(char c)
{
    if (c == 0x28)
        return 1;
    else
        return 0;
}
int countBackParenthesis(char c)
{
    if (c == 0x29)
        return 1;
    else
        return 0;
}

int main(int argc, char const *argv[])
{
    int count_ForvardPar = 0;
    int count_BackPar = 0;
    char c;
    int flag = 1;
    printf("Input word -->\n");
    while ((c = getchar()) != '.')
    {

        if (countForvardParenthesis(c))
        {
            count_ForvardPar++;
        }
        else if (countBackParenthesis(c))
        {
            count_BackPar++;
        }
        if (flag)
            if (count_ForvardPar < count_BackPar)
            {
                flag = 0;
            }
    }
    if (flag ==1 && count_ForvardPar ==count_BackPar)
    {
        printf("YES");
    }
    else
        printf("NO");

    return 0;
}
