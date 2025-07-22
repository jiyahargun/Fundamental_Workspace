#include <stdio.h>
#include <string.h>

int main() 
{
    char sentence[1000];
    char word[100], longestWord[100];
    int i = 0, j = 0, wordCount = 0, maxLength = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i] != '\0') 
    {
        
        if (sentence[i] != ' ' && sentence[i] != '\n') 
        {
            word[j++] = sentence[i];
        } 
        else
        {
            
            if (j > 0) 
            {
                word[j] = '\0';
                wordCount++;
                if (j > maxLength)
                {
                    maxLength = j;
                    strcpy(longestWord, word);
                }
                j = 0; 
            }
        }
        i++;
    }

    
    if (j > 0)
    {
        word[j] = '\0';
        wordCount++;
        if (j > maxLength)
        {
            strcpy(longestWord, word);
        }
    }

    printf("\n %d Total number of words:", wordCount);
    printf("\n %d Longest word:", longestWord);

    return 0;
}
