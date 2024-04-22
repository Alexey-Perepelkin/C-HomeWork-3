#include <stdio.h>
#include <string.h>

#define SIZE 100

#define IN_FILE "input.txt"
#define OUT_FILE "output.txt"

void input(char *fileName, char *str)
{
    FILE *f_in;
    f_in = fopen(fileName, "r");

    while (fscanf(f_in, "%[^\n]", str) == 1)
        ;
    fclose(f_in);
}

void remoweLit(char *str)
{

    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        switch (str[i])
        {
        case 'a':
            str[i] = 'b';
            break;
        case 'A':
            str[i] = 'B';
            break;
        case 'b':
            str[i] = 'a';
            break;
        case 'B':
            str[i] = 'A';
            break;

        default:
            break;
        }
    }
}
void output(char *fileName,char *str){
    FILE *f_out;
    f_out=fopen(fileName,"w");
    fprintf(f_out,"%s",str);
}
int main(int argc, char const *argv[])
{
    char str[SIZE];
    input(IN_FILE,str);
    remoweLit(str);
    output(OUT_FILE,str);
    return 0;
}
