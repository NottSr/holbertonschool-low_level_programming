#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 *
 * @key: key
 * @ht: hash table
 *
 * Return: the value associated with the element, or NULL if key
 * couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *v_elem = NULL;
	unsigned int index = 0;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	v_elem = ht->array[index];
	if (v_elem == NULL)
		return (NULL);

	while (strcmp(key, v_elem->key) != 0)
		v_elem = v_elem->next;

	return (v_elem->value);
}
