#include <stdio.h>
#include "main.h"

int my_name(int argc, char* argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf(argv[i], '\n');
		i++;
	}
	return (0);
}
