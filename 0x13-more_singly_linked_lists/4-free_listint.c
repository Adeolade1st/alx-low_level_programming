#include <stdlib.h>
#include "lists.h"

/**
 *
 * free_listint -  function that frees a listint_t
 *
 * listint_t: Free list
 *
 * return: 0
 */

void free_listint(listint_t *head)
{
listint_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp);

}
}
