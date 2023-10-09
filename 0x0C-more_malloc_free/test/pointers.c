#include <stdio.h>
#include <stdlib.h>

/**
 * 1. create array
 * 2. contain values from min - max (inclde both)
 * 3. return a new pointer
 * 4. if min > max return NULL
 * 5. if malloc == NLL return Null
 *
 */
/**
 *
 *---- REQUIRMENS----
 * 1. malloc allocation
 * 2. for loop
 * 3. need to check for min && max values
 * 4. find the size of the array
 * 8-4 = 4.....4 ,5 ,6, 7,8
 * 7 - 3 = 4 ..... 3,4,5,6,7
 * (max -min) + 1 = total_elements
 * i = 0
 * min = 5
 * max = 10;
 * [5,6,7,8,9,10]
 * [5,6,7,8,9,10,11,12,13,14,15]
 *
 * arr[0] = 5
 * arr[1] = 6
 * arr[2] = 7
 *
 *
 * */

int *array_range(int min, int max)
{
    int *arr = NULL, len = 0, i = 0;

    if (min > max)
    {
        return (NULL);
    }

    len = (max - min) + 1;
    arr = malloc(sizeof(int) * len);
    for (; min <= max ;i++ )
    {
        arr[i] = min++;
    }


    return (arr);
}
