#include <stdio.h>
#include <string.h>
#include <conio.h>
#define SIZE 8

int main(int argc, char const *argv[])
{
    //     int count = 0;

    char letter;
    char arr[SIZE];
    int count = 0;
    for (letter = 'A'; letter <= 'H'; letter++)
        arr[count] = letter;
    count++;
    int str;
    int num;
    int i;
    char c;
    while ((c = getchar()) != '\n')
    {
        if (('A' <= c || 'a' <= c) && (c <= 'H' || c <= 'h'))
        {
            str = c - 64;
        }

        else if ('1' <= c && c <= '8')
        {
            num = c - 48;
        }
        else
        {
            printf("NO");
            return 0;
        }
    }

    if ((num + str) % 2 == 0)
        printf("Black");
    else
        printf("White");
    return 0;
}
