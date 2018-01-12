#include "Search.h"
#include <stdlib.h>

bool binarySearch(int *array, int length, int item)
{
    int max = length;
    int min = 0;

    int center;
    
    while (max >= min)
    {
        center = (max + min) / 2;

        if (center == item) return true;
        else if (center < item)
        {
            min = center++;
        }
        else
        {
            max = center--;
        }
    }

    return false;
}
