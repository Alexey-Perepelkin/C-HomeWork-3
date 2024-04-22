#include <stdio.h>
#include <string.h>

#define IN_FILE "input.txt"
#define OUT_FILE "output.txt"
#define SIZE 1000

int main(int argc, char const *argv[])
{
    char str[SIZE];

    int count=0;
int len;
    FILE *f_in = fopen(IN_FILE, "r");
    while (fscanf(f_in, "%s", str) == 1)
    {
       len = strlen(str);
        if (str[len-1]=='a')
        {
           count++;
        }
    }
    fclose(f_in);

    FILE *f_out = fopen(OUT_FILE, "w");
    fprintf(f_out, "%d", count);
    fclose(f_out);
    return 0;
}
