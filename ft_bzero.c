#include <unistd.h>
void *ft_bzero(void *s, size_t n)
{
    size_t counter;
    unsigned char *str;

    counter = 0;
    str = (unsigned char *)s;
    while (counter < n)
    {
        str[counter] = 0;
        counter++;
    }
    return (s);
}   