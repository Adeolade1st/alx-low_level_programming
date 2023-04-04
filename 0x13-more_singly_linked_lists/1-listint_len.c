#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
size_t len = 0;

while (h != NULL)
{
len++;
h = h->next;
}

return (len);
}

