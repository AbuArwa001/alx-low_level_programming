#include "main.h"
#include "strlen.c"

/**
 * binary_to_uint - changes binary to unsigned int
 * @b: binary to be converted
 * Return: returnes unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int  _int = 0;
	int len = 0, i = 0;

	if (b == NULL)
		return (0);

	len = _strlen(b) - 1;

	while (len >= 0)
	{
		if (b[len] == '0' || b[len] == '1')
		{
			if (b[len] == '1')
				_int += (1 << i);

			len--;
			i++;
		}
		else
		{
			return (0);
		}
	}

	return (_int);

}
