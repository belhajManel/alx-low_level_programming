#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *xp, *temp;
size_t numchar;

xp = malloc(sizeof(list_t));
if (xp == NULL)
return (NULL);

xp->str = strdup(str);

for (numchar = 0; str[numchar]; numchar++)
;

xp->len = numchar;
xp->next = NULL;
temp = *head;

if (temp == NULL)
{
*head = xp;
}
else
{
while (temp->next != NULL)
temp = temp->next;
temp->next = xp;
}

return (*head);
}