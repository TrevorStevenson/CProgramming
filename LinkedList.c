#include "LinkedList.h"
#include <stdlib.h>
#include <stdio.h>

void add(LinkedList *list, int data)
{
    Node *current = list->head;

    if (!current)
    {
        Node *head = (Node *) malloc(sizeof(Node));
        head->data = data;
        list->head = head;

        return;
    }

    while (current->next)
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

    while (current)
    {
        if (current->data == data && previous)
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

    while (current)
    {
        Node *temp = current;
        current = current->next;
        free(temp);
    }
}

bool hasCycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            return true;
        }
    }

    return false;
}
