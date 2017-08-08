#include <stdlib.h>

typedef struct Node
{
    Node *left;
    Node *right;
    int value;
} Node;

typedef struct Tree
{
    Node *root
} Tree;

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
