#include <unistd.h>
int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return (i);
}

char *ft_strrev(char *str)
{
    int i = 0;
    char tmp;

    int len = ft_strlen(str) - 1;
    while(i < len)
    {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
        len--;
        i++;
    }
    return(str);
}
/*#include <stdio.h>
int main()
{
    char str[]= "harun";
    printf("%s", ft_strrev(str));
}*/