char *ft_strcpy(char *s1, char *s2)
{
    int c = 0;

    while(s2[c] != '\0')
    {
        s1[c] == s2[c];
        c++;
    }
    s1[c] = '\0';
    return (s1);
}

/*#include <stdio.h>
int		main(void)
{
	char source[] = "Source string.";
	char destin[] = "Destination string.";
	char *dest;

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", source, destin);

    dest = ft_strcpy(destin, source);

	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", source, dest);
	return (0);
}*/