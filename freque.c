// C program to find frequency of any number in a linked list
#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};


void push(struct Node** head_ref, int new_data)
{

	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

	new_node->data = new_data;

	new_node->next = (*head_ref);

	(*head_ref) = new_node;
}

int frequency(struct Node* head, int search_for)
{
	struct Node* current = head;
	int frequency = 0;
	while (current != NULL) {
		if (current->data == search_for)
			frequency++;
		current = current->next;
	}
	return frequency;
}

int main()
{

	struct Node* head = NULL;

	push(&head, 2);
	push(&head, 3);
	push(&head, 5);
	push(&head, 3);
	push(&head, 7);

	printf("frequency of 3 is %d", frequency(head, 3));
	return 0;
}

