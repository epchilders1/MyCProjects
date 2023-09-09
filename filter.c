/*
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char **argv)
{
    int c;

    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Cannot open file '%s'", argv[1]);
        return 0;
    }
    FILE *output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Cannot open file '%s'", argv[2]);
        fclose(input);
        return 0;
    }

    char buff[50] = {0};
    int i = 0;
    int count = 0;
    while ((c = fgetc(input)) != EOF)
    {
        if(i == 0 && isspace(c)){
            continue;
        }

        if (isalpha(c) || isspace(c))
        {
            buff[i] = c;
            i++;
        }
        //if the scanner encounters a space, it prints the buffer up to the space if the scanner has not encountered a non-alphabet character
        if(isspace(c) || i == 50){
            fputs(buff, output);
            memset(buff, 0, 50);
            count += i;
            i = 0;
            continue;
        }
        //if, during the scanning procedure the scanner encounters a character that is not a letter, it clears the buffer, skips the word and continues scanning
        if(isalpha(c) == 0){
            memset(buff, 0, 50);
            i = 0;
            continue;
        }
        if (count >= 49)
        {
            count = 0;
            break;
        }
    }
    fclose(input);
    fclose(output);

    //   printf("%s", string);

    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char **argv)
{
    FILE *input, *output;
    char ch;

    input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Cannot open file '%s'", argv[1]);
        return -1;
    }

    output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Cannot open file'%s'", argv[2]);
        return -2;
    }

    ch = fgetc(input);
    int k = 0;
    while (ch != EOF)
    {
        char temp[50];
        if ((ch != ' ') && (ch != '\n'))
        {
            temp[k++] = ch;
        }

        else
        {
            int t = 1;
            for (int r = 0; r < k; r++)
            {
                if (isalpha(temp[r]))
                {
                }
                else
                {
                    t = 0;
                    break;
                }
            }
            if (t == 1)
            {
                for (int r = 0; r < k; r++)
                {
                    fputc(temp[r], output);
                }
                fputc(' ', output);
            }
            k = 0;
        }
        ch = fgetc(input);
    }
    fclose(input);
    fclose(output);
    return 0;
}
