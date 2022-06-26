#include <unistd.h>
void *ft_memset(void *b, int c, size_t len)
{
    size_t counter;
    unsigned char *str;

    counter = 0;
    str = (unsigned char *)b;
    while (counter < len)
    {
        str[counter] = (unsigned char)c;
        counter++;
    }
    return (b);
}   