#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 *
 * @size: size of table
 *
 * Return: new table or NULL if fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_tab = NULL;

	new_tab = malloc(sizeof(hash_table_t));
	if (new_tab == NULL)
		return (NULL);

	new_tab->size = size;
	new_tab->array = malloc(sizeof(new_tab) * size);
	if (new_tab->array == NULL)
		return (NULL);

	return (new_tab);
}
