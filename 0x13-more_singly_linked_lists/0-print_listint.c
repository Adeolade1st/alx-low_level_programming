#include <stdio.h>
#include "lists.h"

/**
 * print_listint - program that prints all the elements of listint_t
 * @h: pointer to node
 *
 * retrun: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
    size_t count = 0;
    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        count++;
    }
    return count;
}


