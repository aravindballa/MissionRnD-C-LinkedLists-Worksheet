/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	if (head == NULL || K == 0 || K == 1 || K < 0) return NULL;

	int check = K + 1, len = 0;
	struct node *p;
	p = head;

	while (p != NULL  && p->next != NULL)
	{
		if ((check+1) % K == 0)
		{
			if (p->next->next == NULL) p->next = NULL;
			else p->next = p->next->next;
			check++;
		}
		check++;
		p = p->next;
	}

	return head;
}