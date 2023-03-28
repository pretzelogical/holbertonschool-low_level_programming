#include "hash_tables.h"

/**
 * hash_table_delete- deletes a hash table
 * @ht: the hash table
 *
 * Return: void return
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head;
	hash_node_t *tmp1, *tmp2;
	unsigned long int i;

	head = ht;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			tmp1 = ht->array[i];
			while (tmp1)
			{
				tmp2 = tmp1->next;
				free(tmp1->key);
				free(tmp1->value);
				free(tmp1);
				tmp1 = tmp2;
			}
		}
	}
	free(head->array);
	free(head);
}
