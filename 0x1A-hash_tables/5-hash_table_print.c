#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i = 0;
	int comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			current = ht->array[i];
			while (current != NULL)
			{
				printf("'%s': '%s'", current->key, current->value);
				current = current->next;
				if (current != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
		i++;
	}
	printf("}\n");
}
