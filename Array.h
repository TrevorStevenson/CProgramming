#ifndef Tree_h
#define Tree_h

typedef struct Array
{
    int size;
    int capacity;
    int *items;
} Array;

Array * createArray();
void add(Array *array, int item);
void del(Array *array, int item);

#endif
