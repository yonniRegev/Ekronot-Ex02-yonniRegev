#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct Node
{
    unsigned int data;
    Node* next;
} Node;

void addToList(Node** head, unsigned int value);
int removeFromList(Node** head);

#endif 