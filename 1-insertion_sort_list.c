#include "sort.h"

/**
 * insertion_sort_list - in doubly linked list;
 * @list: ptr to the unsorted list
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *newhead = NULL, *curr, *ptrsorted;

	if ((*list) == NULL || (*list)->next == NULL)
	{
		print_list(*list);
	}

	while (*list != NULL)
	{
		curr = *list;
		*list = (*list)->next;
		if (newhead == NULL || curr->n < newhead->n)
		{
			curr->next = newhead;
			newhead = curr;
		}
		else
		{
			ptrsorted = newhead;
			while (ptrsorted != NULL)
			{
				if (ptrsorted->next == NULL || curr->n < ptrsorted->next->n)
				{
					curr->next = ptrsorted->next;
					ptrsorted->next = curr;
					break;
				}
				ptrsorted = ptrsorted->next;
			}
		}
        print_list(newhead);
	}
}
