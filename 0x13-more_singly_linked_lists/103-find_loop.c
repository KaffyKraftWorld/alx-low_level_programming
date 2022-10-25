#include "lists.h"

/**
 * find_listint_loop - function that finds a loop and the begining of loop
 * @head: pointer to head in function
 * Return: pointer to the begining of loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise;
	listint_t *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tortoise = hare = head;

	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
			break;
	}

	if (tortoise != hare)
		return (NULL);

	tortoise = head;

	while (tortoise != hare)
	{
		tortoise = tortoise->next;
		hare = hare->next;
	}
	return (hare);
}
