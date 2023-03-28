#include "hash_tables.h"


/**
 * hash_table_print- prints a hash table
 * @ht: the hash table
 *
 * Return: void return
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	unsigned short comma;

	if (!ht)
		return;

	comma = 0;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (comma)
				printf(", ");

			tmp = ht->array[i];
			while (tmp)
			{
				printf("'%s' : '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
				if (tmp)
					printf(", ");
			}
			comma = 1;
		}
	}
	printf("}\n");
}
