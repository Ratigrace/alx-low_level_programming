#include "hash_tables.h"

/**
 * hash_table_set - update an elements in a hash table.
 * @ht: pointer to the hash table.
 * @key: key to add and cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Success - 1.
 *         Failure - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_table;
	char *update;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	update = strdup(value);
	if (update == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = update;
			return (1);
		}
	}

	new_table = malloc(sizeof(hash_node_t));
	if (new_table == NULL)
	{
		free(update);
		return (0);
	}
	new_table->key = strdup(key);
	if (new_table->key == NULL)
	{
		free(new_table);
		return (0);
	}
	new_table->value = update;
	new_table->next = ht->array[index];
	ht->array[index] = new_table;

	return (1);
}
