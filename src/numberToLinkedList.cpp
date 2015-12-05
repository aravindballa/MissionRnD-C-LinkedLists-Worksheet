/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

void ReverseIt(int *n)
{
	int rev = 0;
	while (*n > 0)
	{
		rev = (10 * rev) + (*n % 10);
		*n /= 10;
	}
	*n = rev;
}

struct node * numberToLinkedList(int N) {
	if (N < 0) N = N*(-1);
	ReverseIt(&N);
	struct node *head;
	head = (struct node*)malloc(sizeof(struct node));

	struct node *p;
	p = head;

	p->num = N % 10;
	p->next = NULL;

	N /= 10;
	
	

	while (N > 0)
	{
		p->next = (struct node*)malloc(sizeof(struct node));
		p = p->next;
		p->num = N % 10;
		N = N / 10;
	}

	p->next = NULL;

	return head;
}