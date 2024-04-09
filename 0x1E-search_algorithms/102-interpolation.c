#include "search_algos.h"

/**
 * interpolation_search - search for value in array
 * @array: array to search from
 * @size: size of the array
 * @value: value to search
 * Return: index where v<lue is located
*/
int interpolation_search(int *array, size_t size, int value)
{
    size_t  low = 0 , high = size -1;

    while (low < size)
    {
        size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
        if (!array[pos])
        {
            printf("Value checked array[%ld] is out of range\n", pos);
            return (-1);
        }
        
        if (array[pos] == value)
        {
            printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
            return (pos);
        }else
        {
            if (array[pos] > value)
                high = pos - 1;
            else
                low = pos + 1;
        }
    }
    return (-1);
}