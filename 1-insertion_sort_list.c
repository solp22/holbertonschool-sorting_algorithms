#include "sort.h"
/**
 * insertion_sort_list - sorts doubly linked list using Insertion sort
 * @list: pointer to head of doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list, *previous = NULL, *tmp = NULL;

	if (!list || !*list)
		return;

	while (current)
	{
		tmp = current;
		while (tmp->prev && tmp->n < tmp->prev->n)
		{
			previous = tmp->prev;
			if (previous->prev)
			{
				previous->next = tmp->next;
				if (tmp->next)
					tmp->next->prev = previous;
				tmp->next = previous;
				tmp->prev = previous->prev;
				previous->prev->next = tmp;
				previous->prev = tmp;
			}
			else
			{
				previous->next = tmp->next;
				if (tmp->next)
					tmp->next->prev = previous;
				tmp->next = previous;
				tmp->prev = previous->prev;
				previous->prev = tmp;
				*list = tmp;
			}

			print_list(*list);
		}
		current = current->next;
	}
}
