#include <unistd.h>
int ft_(void *b, int c, size_t len)
{
    size_t counter;
    char *str;

    counter = 0;
    str = (char *)b;
    while (counter < len)
    {
        str[counter] = c;
        counter++;
    }
    return (b);
}