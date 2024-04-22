#include <stdio.h>
#include <string.h>

#define SIZE 100

#define IN_FILE "input.txt"
#define OUT_FILE "output.txt"

void input(char *fileName, char *str)
{
    FILE *f_in;
    f_in = fopen(fileName, "r");
    if (f_in)
    {
        while (fscanf(f_in, "%[^\n]", str) == 1)
        {
        }
        fclose(f_in);
    }
    else
        printf("Can't open file!");
}
void output(char *fileName, char *str)
{
    FILE *f_out;
    f_out = fopen(fileName, "w");
    int i = -1;
    while (str[++i] != '\0')
    {
        if (str[i] != ' ')
            fprintf(f_out, "%c", str[i]);
    }

    fclose(f_out);
}
void delDuable(char *str)
{
    int i = -1;
    int j = 0;
    char c;
    int len = strlen(str);
    while (str[++i] != '\0')
    {
        c = str[i];
        j = i;
        while (str[++j] != '\0')
        {
            if (str[j] == c)
            {
                str[j] = ' ';
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    char str[SIZE] = {0};
    input(IN_FILE, str);
    delDuable(str);
    printf("%s", str);
    output(OUT_FILE, str);

    return 0;
}
