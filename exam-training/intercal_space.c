#include <unistd.h>

void ft_interval_space(char *str)
{
    int i= 0;

    while(str[i])
    {
        if(str[i] >= 32 && str[i] <= 126 && str[i])
        {
            write(1, &str[i], 1);
            write(1, " ", 1);

        }
        i++;
    }
}

int main(int ac, char **av)
{
    ft_interval_space(av[1]);
}