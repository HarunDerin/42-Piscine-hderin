void ft_strlen(char *str)
{
    int c = 0;
    while(str[c] != '\0')
    {
        c++;
    }
    return (c);
}
