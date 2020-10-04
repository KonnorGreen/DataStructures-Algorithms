#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // Prompt user for string input
    string text = get_string("Enter Text: ");

    // declare variables
    int letters = 0;
    int sentences = 0;
    int words = 1;
    double L, S, index;

    // loop that goes through the length of the string and checks each chararcter
    for (int  i = 0; i < strlen(text); i++)
    {
        // checks for letters a-z, A-Z
        if (text[i] >= 65 && text[i] <= 122)
        {
            letters++;
        }

        // checks for punctuation, ! . ?
        if (text[i] == 46 || text[i] == 33 || text[i] == 63)
        {
            sentences++;
        }

        // Checks for spaces to count for words.
        if (text[i] == 32)
        {
            words++;
        }
    }

    // Casting the ints to float for integer division

    L = (float) letters / (float) words * 100;
    S = (float) sentences / (float) words * 100;
    index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index >= 16)
    {
        printf("Grade 16+\n");
    }

    else if (index <= 1)
    {
        printf("Before Grade 1\n");
    }

    else
    {
        printf("Grade %.0f\n", index);
    }
}
