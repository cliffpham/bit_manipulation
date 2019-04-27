#include "../includes/stack.h"

char   *fill_word(char *str, int start, int end)
{
    int len = end - start;
    int i = 0;
    int start_c = start;
    char *word = malloc(sizeof(char *) * (len));
    
    if (end == strlen(str) - 1)
        end = strlen(str) + 1;
    while (start_c < end)
    {
        word[i] = str[start_c];
        i++;
        start_c++;
    }
    word[i] = 0;
    return (word);
}

void    fill_words(char *str, char **words)
{
    int i = 0;
    int k = 0;
    int flag = 0;
    int j;
    char *word;

    while (str[i] != '\0')
    {
        if ((str[i] != ' ' || str[i] != '\t') && flag == 0)
        {
          flag = 1;
          j = i;
        }
        if ((str[i] == ' ' || str[i+1] == '\0' || str[i] == '\t' || str[i] == '\n') && flag == 1)
        {
          flag = 0;
          word = fill_word(str, j, i);
          words[k] = word;
          k++;
        }
        i++;
    }
}

char    **split_whitespaces(char *str)
{
    int count = count_words(str);
    char **words = malloc(sizeof(char **) * count + 1);
    words[count] = 0;
    fill_words(str, words);
    
    return (words);
}

int     main(void)
{
    char **result = split_whitespaces("4 - 5 * (25 - 2)");
    int i = 0;
    while (result[i])
    {
        printf("%s", result[i]);
        i++;
    }
    printf("\n");
    return (0);
}
