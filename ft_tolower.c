#include <unistd.h>
int ft_toupper(int c)
{
    if (c > 64 && c < 91)
        return(c + 32);
    return (c);

}