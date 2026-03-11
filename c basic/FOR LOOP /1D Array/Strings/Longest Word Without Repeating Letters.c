#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[200];
    char word[50];
    char longest[50] = "";
    int i = 0, j = 0, k, l, flag;

    printf("Enter sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while(sentence[i] != '\0')
    {
        if(sentence[i] != ' ' && sentence[i] != '\n')
        {
            word[j++] = sentence[i];
        }
        else
        {
            word[j] = '\0';

            flag = 1;
            for(k = 0; word[k] != '\0'; k++)
            {
                for(l = k + 1; word[l] != '\0'; l++)
                {
                    if(word[k] == word[l])
                    {
                        flag = 0;
                        break;
                    }
                }
                if(flag == 0)
                    break;
            }

            if(flag == 1 && strlen(word) > strlen(longest))
            {
                strcpy(longest, word);
            }

            j = 0;
        }

        i++;
    }

    printf("Longest word with unique characters: %s", longest);

    return 0;
}
