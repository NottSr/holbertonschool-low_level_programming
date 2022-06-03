#include <main.h>
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

	new_tab = sizeof(malloc(hash_table_t));
	if new_tab == NULL
		return (NULL);

	new_tab->array = size;
	new_tab->size = sizeof(malloc(hash_table_t) * size);
	if new_tab->size == NULL
		return (NULL);

	return (new_tab);
}
