/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){

	int k = 0, i, t;
	int count[3] = { 0 }; //contains the count of 0, 1 and 2 respectively.
	struct node *p;

	p = head;

	while (p != NULL)
	{
		count[p->data]++;
		p = p->next;
	}

	p = head;

	for (i = 0; i < count[0]; i++)
	{
		p->data = 0;
		p = p->next;
	}
	for (i = 0; i < count[1]; i++)
	{
		p->data = 1;
		p = p->next;
	}
	for (i = 0; i < count[2]; i++)
	{
		p->data = 2;
		p = p->next;
	}
	
	
}