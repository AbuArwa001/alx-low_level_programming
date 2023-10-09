#include "main.h"
#include <stdlib.h>

/**
 * ---CONSTRAINTS ----
 * 1. allocate memory of NMEMB elements of size size
 * 2. memory should e set to zero
 * 3. if NMEMB || size  == 0 return NULL
 * 4. if malloc fails rrturn NULL
 *
 * NOTE: sdtlib func calloc man calloc
 */

/**
 * -- REQUIRMENTS---
 * 1. allocate memory
 * 2. memory should be set to 0
 * 3. check if No of elemnts || size  equals zero (0)
 * 4. check if allocation fails
 * */


void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr = NULL;

    if (nmemb == 0 || size == 0)
    {
        return (NULL);
    }
    ptr = malloc(size * nmemb);
    if (ptr == NULL)
    {
        return (NULL);
    }
    _memset(ptr,0,nmemb * size);

    return (ptr);
}
