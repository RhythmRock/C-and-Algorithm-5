#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Pointer ile Stringteki Unlu ve Unsuzler

void findVowels(char *p)
{
    if (*p == '\0')
        return;

    char* unluler = "AEIOU";

    if (strchr(unluler, toupper(*p))) {
        printf("%c is an Vowel.\n", *p);
    }

    findVowels(p + 1);
}

int main()
{
    char metin[100];

    printf("Enter a Text: ");
    fgets(metin, sizeof(metin), stdin);

    int uzunluk = strlen(metin) - 1;

    printf("Text is: %sChar Number is: %d\n", metin, uzunluk);

    int i = 0, j = 0;
    char alpha[uzunluk];
    for (; i < uzunluk; i++)
    {
        if (isalpha(metin[i]))
        {
            if (islower(metin[i]))
                metin[i] = toupper(metin[i]);

            alpha[j] = metin[i];
            j++;
        }
    }

    alpha[j] = '\0';
    findVowels(&alpha[0]);

    return 0;
}

