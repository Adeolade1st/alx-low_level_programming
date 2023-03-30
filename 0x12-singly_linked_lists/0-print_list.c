#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * print_list - Prints all the elements of a linked list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */


size_t print_list(const list_t *h)

{

size_t nodes = 0;

while (h != NULL)

{

if (h->str != NULL)

printf("[%d] %s\n", h->len, h->str);

else 

printf("[0] (nil)\n");

nodes++;

h = h->next;

}

return (nodes);

}
