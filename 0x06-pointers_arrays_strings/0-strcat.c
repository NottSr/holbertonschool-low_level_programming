#include "main.h"

char *_strcat(char *dest, char *src)
{
	int i = 0, dlen;

	while (dest[i])
	{
		i++;
	}
	dlen = i;
	i = 0;
	while (src[i])
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return dest;
}
