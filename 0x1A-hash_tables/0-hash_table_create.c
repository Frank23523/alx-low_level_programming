#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the array.
 *
 * Return: a pointer to the newly created hash table, else NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	hash_node_t **hn = NULL;

	hn = malloc(sizeof(hash_node_t *) * size);
	if (!hn)
	{
		free(hn);
		return (NULL);
	}

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = hn;

	return (ht);
}
