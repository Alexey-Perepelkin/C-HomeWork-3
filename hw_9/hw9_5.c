#include <stdio.h>
#include <string.h>

#define IN_FILE "input.txt"
#define OUT_FILE "output.txt"
#define SIZE 1000

int main(int argc, char const *argv[])
{
    char line[SIZE];
    char result[SIZE];
    int len, max_len = 0;

    FILE *f_in = fopen(IN_FILE, "r");
    while (fscanf(f_in, "%s", line) == 1)
    {
        len = strlen(line);
        if (len > max_len)
        {
            max_len = len;
            strcpy(result, line);
        }
    }
    fclose(f_in);

    FILE *f_out = fopen(OUT_FILE, "w");
    fprintf(f_out, "%s", result);
    fclose(f_out);
    return 0;
}
