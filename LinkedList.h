#ifndef LinkedList_h
#define LinkedList_h

#include <stdbool.h>

typedef struct Node
{
    struct Node *next;
    int data;
} Node;

typedef struct LinkedList
{
    Node *head;
    int size;

} LinkedList;

void add(LinkedList *head, int data);
void delete(LinkedList *list, int data);
void destroy(LinkedList *list);
bool hasCycle(Node *head);

#endif
