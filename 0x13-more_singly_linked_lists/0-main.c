#include <stdio.h>
#include <stdlib.h>

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);

int main(void)
{
    listint_t *head = NULL;
    listint_t *new_node = NULL;
    size_t n;

    head = malloc(sizeof(listint_t));
    if (head == NULL)
    {
        printf("Error\n");
        return (1);
    }
    head->n = 8;
    head->next = NULL;

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
    {
        printf("Error\n");
        free(head);
        return (1);
    }
    new_node->n = 9;
    new_node->next = head;
    head = new_node;

    n = print_listint(head);
    printf("-> %lu elements\n", n);

    free(new_node);
    free(head);
    return (0);
}

size_t print_listint(const listint_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        count++;
    }
    return (count);
}