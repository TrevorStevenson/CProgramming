#ifndef Tree_h
#define Tree_h

typedef struct Node
{
    Node *left;
    Node *right;
    int value;
} Node;

typedef struct Tree
{
    Node *root;
} Tree;

void add(Tree *tree, int value);
Node find(Tree *tree, int value);
void BFS(Tree *tree);
void DFS(Tree *tree);

#endif
