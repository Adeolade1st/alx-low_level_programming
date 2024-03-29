#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *struct list_s - function that adds a new node at the beginning of a list_t list.
 *function add_node: add new nodes
 *
 *return: the address of the new element, or NULL if it failed
 */


typedef struct list_s
{
char *str;
struct list_s *next;
}

struct list_t;

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;

if (!head || !str)
{
return NULL;
}

new_node = malloc(sizeof(list_t));
if (!new_node)
{
return (NULL);
}

new_node->str = strdup(str);
if (!new_node->str)
{
free(new_node);
return (NULL);
}

new_node->next = *head;
*head = new_node;

return (new_node);
}

