#ifndef Tree_h
#define Tree_h

typedef struct Array
{
    int size;
    int capacity;
    void *items;
} Array;

Array * createArray();
void add(Array *array, int item);

#endif
