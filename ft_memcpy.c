#include <unistd.h>
void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t counter;
    unsigned char *str;
    unsigned char *dest;
    unsigned char *source;

    counter = 0;
    dest = (unsigned char *)dst;
    source = (unsigned char *)src;
    while (counter < n)
    {
        dest[counter] = source[counter];
        counter++;
    }
    return (dst);
}   