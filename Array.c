#include <stdlib.h>
#include "Array.h"

Array * createArray()
{
    Array *array = (Array *) malloc(sizeof(Array));
    array->size = 0;
    array->capacity = 1;
    int items[array->capacity];
    array->items = items;
    return array;
}

void add(Array *array, int item)
{
    if (array->size + 1 > array->capacity)
    {
        array->capacity *= 2;
        int newArray[array->capacity];

        for (int i = 0; i < array->size; i++)
        {
            newArray[i] = array->items[i];
        }

        array->items = newArray;
    }
    else
    {
        array->items[array->size] = item;
    }

    array->size++;
}

void del(Array *array, int item)
{
    int newArray[array->capacity];
    int j = 0;

    for (int i = 0; i < array->size; ++i)
    {
        if (array->items[i] != item)
        {
            newArray[j] = array->items[i];
            j++;
        }
    }

    array->items = newArray;
    array->size--;
}
