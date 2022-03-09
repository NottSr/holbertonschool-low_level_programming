#include <stdio.h>
#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *ar;

	ar = malloc(sizeof(*ar) * size);
	ar[0] = c;
	return (ar);
}
