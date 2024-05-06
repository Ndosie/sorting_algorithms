#include "sort.h"

/**
 * insertion_sort_list - sorts doubly linked list using insertion algorithm
 * @list: pointer to pointer of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *org, *t, *p;
	int swap = 0;

	org = *list;

	if (org == NULL)
		return;

	while (org->next)
	{
		t = org->next;
		p = org;
		
		while (p && p->n > t->n)
		{
			p = p->prev;
			p->next = t->next;
			t->next = p;
			t->prev = p->prev;
			p->prev = t;
			swap++;
			print_list(org);
		}
		if (swap > 0)
		{
			org = org;
			swap = 0;
		}
		else
			org = org->next;
	}
}
