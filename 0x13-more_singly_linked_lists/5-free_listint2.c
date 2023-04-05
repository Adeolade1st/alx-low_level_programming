#include <stdlib.h>
#include "lists.h"

/**
 * listint_t - function that frees lists listint_t
 *
 * @head: pointer to node
 *
 * @free_listint2: list to be freed
 *
 * return: free list
 */


void free_listint2(listint_t **head)

{

listint_t *current, *next;
if (head == NULL)
return;
current = *head;
while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
*head = NULL;
}

