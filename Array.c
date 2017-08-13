#include <stdlib.h>

typedef struct Array;

Array * createArray();
void add(Array *array, int item);

typedef struct Array
{
    int size;
    int capacity;
    void *items;
} Array;

Array * createArray()
{
    Array *array = (Array *) malloc(sizeof Array);
    array->size = 0;
    array->capacity = 1;
    array->items = void[capacity];
}

Array * add(Array *array, int item)
{
    if (size + 1 > capacity)
    {
        capacity *= 2;
        int newArray[capacity];

        for (int i = 0; i < size; i++)
        {
            newArray[i] = array->items[i];
        }

        array->items = newArray;
    }
    else
    {
        array[array->size] = item;
    }

    array->size++;
    return array;
}
