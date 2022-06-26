#include <unistd.h>
void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t counter;
    unsigned char *str;
    unsigned char *dest;
    unsigned char *source;

    // if (dst < src)
    //     ft_memcpy(dst, src, len);
    counter = len;
    dest = (unsigned char *)dst;
    source = (unsigned char *)src;

    while (counter > 0)
    {  
        dest[counter] = source[counter];
        counter--;
    }
    return (dst);
}  