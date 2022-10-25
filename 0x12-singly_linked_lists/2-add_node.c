#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = _strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new->len = nchar;
	new->next = *head;
	*head = new;

	return (*head);
}
/**
 * *_strdup - function with one argument
 * @str: string argument
 * Description: returns a pointer to allocated space in memory
 * Return: pointer
 */
char *_strdup(const char *str)
{
	int i, j;
	char *ptr;
		if (str == NULL)
			return (NULL);
		i = 0;
		while (*(str + i) != '\0')
		{
			i++;
		}
		ptr = malloc(sizeof(char) * i + 1);
		if (ptr == NULL)
			return (NULL);
		j = 0;
		while (str[j] != '\0')
		{
			ptr[j] = str[j];
			j++;
		}
		ptr[j] = '\0';
		return (ptr);
}
