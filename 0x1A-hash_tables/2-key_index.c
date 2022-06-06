#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key.
 *
 * @key: key
 * @size: size
 *
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int k_ind = 0;

	k_ind = (hash_djb2(key)) % size;
	return (k_ind);
}
