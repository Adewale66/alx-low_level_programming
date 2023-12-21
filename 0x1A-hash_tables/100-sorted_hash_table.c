#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table = NULL;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	new_table->shead = NULL;
	new_table->stail = NULL;

	return (new_table);
}

/**
 * shash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the key/value to
 * @key: key to add
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node = NULL, *temp = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->snext;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		new_node->snext = NULL;
		new_node->sprev = NULL;
	}
	else
	{
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
		new_node->sprev = NULL;
	}

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		new_node->next = NULL;
		new_node->sprev = NULL;
	}
	else
	{
		new_node->next = ht->array[index];
		ht->array[index]->sprev = new_node;
		ht->array[index] = new_node;
		new_node->sprev = NULL;
	}

	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key to look for
 * Return: value associated with the element, or NULL if key couldn't be found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);

		temp = temp->next;
	}

	return (NULL);
}

/**
 * shash_table_print - prints a hash table
 * @ht: hash table to print
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp = NULL;
	int flag = 0;

	if (ht == NULL)
		return;

	temp = ht->shead;

	printf("{");
	while (temp != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		flag = 1;
		temp = temp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a hash table in reverse
 * @ht: hash table to print
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp = NULL;
	int flag = 0;

	if (ht == NULL)
		return;

	temp = ht->stail;

	printf("{");
	while (temp != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		flag = 1;
		temp = temp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: hash table to delete
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp = NULL, *temp2 = NULL;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	temp = ht->shead;

	while (temp != NULL)
	{
		temp2 = temp->snext;
		free(temp->key);
		free(temp->value);
		free(temp);
		temp = temp2;
	}

	free(ht->array);
	free(ht);
}
