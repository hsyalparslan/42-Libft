#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void *ft_memmove(void *dst, const void *src, size_t len);
int main (void)
	{
		char *a = strdup("Whatever");
		char *b = strdup("CopyThis");
		printf("%s", (char *)ft_memmove(a, b, 6));
		return (0);
	}
