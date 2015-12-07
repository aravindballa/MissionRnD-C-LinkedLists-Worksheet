/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	if(head == NULL) return NULL;

	int t, i = 0, j;

	struct node *p, *q, *tail = NULL;
	p = head; q = head;

	while (p != NULL && tail != head)
	{
		j = 0;
		q = head;
		while (q->next != tail)
		{
			
			if (q->num > q->next->num)
			{
				t = q->num;
				q->num = q->next->num;
				q->next->num = t;
			}
			q = q->next;
			j++;
		}
		p = p->next;
		i++;
		tail = q;
	}

	return head;
}