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
