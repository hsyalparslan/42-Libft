#include <unistd.h>
int ft_strlen(char *c)
{
	int n;
	while (c[n] != '\0')
	{
		n++;
	}
	return n;
}

char *ft_strrchr(const char *s, int c);
{
    size_t i;
    k = (char)c;
    i = ft_strlen(s);
    while (s[i] != '\0')
    {
        if (s[i] == k)
            return((char *)s + i);
        i--;
    }
    return(0);
}