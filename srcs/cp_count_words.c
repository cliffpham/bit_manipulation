int count_words(char *str)
{
    int i = 0;
    int flag = 0;
    int count = 0;

    while (str[i] != '\0')
    {
        if ((str[i] != ' ' && str[i] != '\t' && str[i] != '\n') && flag == 0)
        {
            flag = 1;
        }
        if ((str[i] == ' ' || str[i+1] == '\0' || str[i] == '\t' || str[i] == '\n') && flag == 1)
        {
            flag = 0;
            count ++;
        }
        i++;
    }
    return (count);
}
