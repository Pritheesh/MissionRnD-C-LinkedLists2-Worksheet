/*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>

struct node 
{
	int num;
	struct node *next;
};

int linkedListMedian(struct node *head) 
{
	if (head == NULL)
		return -1;
	if (head->next == NULL)
		return head->num;
	struct node * step_1 = head, *step_2 = head;
	while (1)
	{
		if (step_2->next == NULL)
			return step_1->num;
		else if (step_2->next->next == NULL)
			return ((step_1->num + step_1->next->num) / 2);

		step_1 = step_1->next;
		step_2 = step_2->next->next;
	}

}
