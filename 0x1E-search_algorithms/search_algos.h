#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

/* Libraries */

#include <stdio.h>
#include <stdlib.h>

/* Prototypes */

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS */
