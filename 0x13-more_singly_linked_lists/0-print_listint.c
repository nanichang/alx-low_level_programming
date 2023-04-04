#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 * Author: Nanichang Katzing
 */
size_t print_listint(const listint_t *h) 
{
    size_t numNodes = 0;

    for (; h != NULL; h = h->next, numNodes++) 
	{
        printf("%d\n", h->n);
    }

    return numNodes;
}

