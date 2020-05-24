#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{


    if (argc != 2)
    {
        printf("missing command-line argument\n");
        return 1;
    }

    int counter = 0;
    for (int i = 1; i <= 26; i++)
    {

        for (int j = i + 1; j <= 26; j++)
        {
            if (toupper(argv[1][i]) == toupper(argv[1][j]))
            {
                printf("Bad\n");
                return 1;
            }
        }

        if (isalpha(argv[1][i]) != 0)
        {
            counter++;
        }
        else if (ispunct(argv[1][i]) != 0)
        {
            printf("Bad\n");
            return 1;
        }
        else if (isdigit(argv[1][i]) != 0)
        {
            printf("Bad\n");
            return 1;
        }

    }

    if (counter == 25)
    {
        printf("good\n");
    }

    string s = get_string("plaintext: ");
    char output[strlen(s)];

    for (int i = 0; i < strlen(s); i++)
    {

        if (isblank(s[i]) != 0)
        {
            output[i] = ' ';
        }
        else if (isupper(s[i]) != 0)
        {
            output[i] = (char)toupper(argv[1][s[i] - 'A']);
        }
        else if (islower(s[i]) != 0)
        {
            output[i] = (char)tolower(argv[1][s[i] - 'a']);
        }
        else
        {
            output[i] = s[i];
        }


    }

    printf("ciphertext: %s\n", output);
    return 0;
}