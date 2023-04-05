#include "lists.h"
#include <stdlib.h>

typedef struct listint_s {
int n;
struct listint_s *next;
} listint_t;

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return NULL; // Failed to allocate memory for new node
}
new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node; // If list is empty, make new node the head
}
else
{

listint_t *current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = new_node; // Traverse to the end of the list and append new node
}

return new_node; // Return address of new element
}

