#include <stdio.h>
#include <string.h>

#define SIZE 100

#define IN_FILE "input.txt"
#define OUT_FILE "output.txt"



int main(int argc, char const *argv[])
{

    FILE *f_in = fopen(IN_FILE, "r");
    FILE *f_out = fopen(OUT_FILE, "w");

    char word1[100], word2[100];
    fscanf(f_in, "%s%s", word1, word2);

    int alpha1[26] = {0};
    int alpha2[26] = {0};
    int counter = 0;
    int index =0;
    while (word1[counter] != '\0')
    {
        index=word1[counter] - 'a';
        ++alpha1[index];
        printf("%d\n", alpha1[index]);
        counter++;

    }
    counter = 0;
    while (word2[counter] != '\0')
    {
        index=word1[counter] - 'a';
        ++alpha2[index];
        counter++;
    }
    for (int i = 0; i < 26; ++i)
        if (alpha1[i] == 1 && alpha2[i] == 1)
            fprintf(f_out, "%c ", i + 97);
    fclose(f_in);
    fclose(f_out);
    return 0;
}
