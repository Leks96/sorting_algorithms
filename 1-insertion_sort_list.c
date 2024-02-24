#include "sort.h"
/**
* insertion_sort_list - function that sorts a doubly linked list
* of integers in ascending order using the Insertion sort algorithm
* @list: Dobule linked list to sort
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *head;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	head = (*list)->next;

	while (head != NULL)
	{
		while (head->prev != NULL && head->prev->n > head->n)
		{
			head = swap_node(head, list);
			print_list(*list);
		}
		head = head->next;
	}
}

/**
*swap_node - swap a node for his previous one
*@node: node
*@list: node list
*Return: return a pointer to a node which was enter it
*/
listint_t *swap_node(listint_t *head, listint_t **list)
{
	listint_t *tail = head->prev, *curr = head;

	tail->next = curr->next;
	if (curr->next != NULL)
		curr->next->prev = tail;
	curr->next = tail;
	curr->prev = tail->prev;
	tail->prev = curr;

	if (curr->prev != NULL)
		curr->prev->next = curr;
	else
		*list = curr;
	return (curr);
}
