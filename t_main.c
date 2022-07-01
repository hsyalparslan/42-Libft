#include <stdio.h>
#include <string.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n);

int	main(void)
{

	char src[] = "y this.";
	char dest[] = "destination string.";
	char src2[] = "y this.";
    char dest2[1909] = "destination string.";

	ft_strlcpy(dest, src, 5);
	strlcpy(dest2, src2, 5);
	printf("%s", dest);
	printf("\n%s", dest2);
}
