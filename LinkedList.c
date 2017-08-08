#include "LinkedList.h"
#include <stdlib.h>
#include <stdio.h>
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

void add(LinkedList *list, int data)
{
    Node *current = list->head;

    if (current == NULL)
    {
        Node *head = (Node *) malloc(sizeof(Node));
        head->data = data;
        list->head = head;

        return;
    }

    while(current->next != NULL)
    {
        current = current->next;
    }

    Node *last = (Node *) malloc(sizeof(Node));
    last->data = data;
    current->next = last;
}

void delete(LinkedList *list, int data)
{
    Node *current = list->head;
    Node *previous = NULL;

    while(current != NULL)
    {
        if (current->data == data && previous != NULL)
        {
            previous->next = current->next;
            free(current);
            return;
        }

        current = current->next;
    }

    Node *last = (Node *) malloc(sizeof(Node));
    last->data = data;
    current->next = last;
}

void destroy(LinkedList *list)
{
    Node *current = list->head;

    while (current != NULL)
    {
        Node *temp = current;
        current = current->next;
        free(temp);
    }
}
