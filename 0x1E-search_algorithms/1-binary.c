#include "search_algos.h"
#include <math.h>
/**
 * linear_search - search items in lineaar algorith
 * @array: array to search from
 * @size: size of the array
 * @value: value to search
 * Return: index where v<lue is located
 *
*/

int binary_search(int *array, size_t size, int value)
{
    size_t i = 0, mid = 0, left = 0, right = 0;

	if (!array)
		return (-1);
    left = 0;
    right = size - 1;
    while (left <= right)
    {
        printf("Searching in array: ");
        for (i = left; i <= right; i++)
        {
            if (i == right)
            {
                printf("%d", array[i]);
            }
            else
            {
                printf("%d, ", array[i]);
            }
            
            
        }
        printf("\n");
        
        mid = floor((left + right) / 2);
        if (array[mid] < value)
            left = mid + 1;
        else if (array[mid] > value)
            right = mid - 1;
        else
            return mid;
    }
    return (-1);
}