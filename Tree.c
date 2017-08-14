#include <stdlib.h>
#include "Tree.h"

void add(Tree *tree, int value)
{
    Node *current = tree->root;

    while (current)
    {
        if (value >= current->value)
        {
            if (!current->left)
            {
                current->left = Node(value);
                return;
            }

            current = current->left;
        }
        else
        {
            if (!current->right)
            {
                current->right = Node(value);
                return;
            }

            current = current->right;
        }
    }
}

Node find(Tree *tree, int value)
{
    Node *current = tree->root;

    while (current)
    {
        if (current->value == value)
        {
            return current;
        }

        if (value <= current-> value)
        {
            current = current->left;
        }
        else
        {
            current = current->right;
        }
    }

    return NULL;
}
