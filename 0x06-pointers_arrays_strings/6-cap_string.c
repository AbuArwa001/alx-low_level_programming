#include "main.h"
#include <stdio.h>
/**
 * cap_string - Capitalize beggining of a string
 * @str: string to be capitalized
 * Return: returns a capitalize string
 */

char *cap_string(char *str)
{
	int i = 0, j = 0;
	char *special = ",.;!?(){}\"\t\n ";

	while (str[i] != '\0')
	{
		j = 0;

		while (special[j] != '\0')
		{
			if (special[j] == str[i])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					/*printf("character is %c\n", str[i+1]);*/
					str[i + 1] = str[i + 1] - 32;
					/*str[i+1] = str[i + 1] - 32;*/
				}
			}

			j++;
		}

		i++;
	}

	return (str);
}
