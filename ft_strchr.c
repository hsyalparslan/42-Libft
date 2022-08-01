#include <unistd.h>
char *ft_strchr(const char *s, int c);
{
    size_t i;
    k = (char)c;
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == k)
            return((char *)s + i);
        i++;
    }
    return(0);
}