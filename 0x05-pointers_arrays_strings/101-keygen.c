#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * getRandomLowercaseLetter- generate password or elf file
 * Return: rreturns a random character;
 */

char getRandomLowercaseLetter(void)
{
	return ('a' + rand() % 26);
}
/**
 * getRandomDigit - generate password or elf file
 * Return: returns a random digit
 */

char getRandomDigit(void)
{
	return ('0' + rand() % 10);
}
/**
 * generateRandomPassword  - generate Radom passwordfile
 * @password: pasword to be generated;
 * @length: length of the paswword
 */

void generateRandomPassword(char *password, int length)
{
	int i = 0;

	for (i = 0; i < length; i++)
	{
		if (i % 2 == 0)
		{
			password[i] = getRandomLowercaseLetter();
		}
		else
		{
			password[i] = getRandomDigit();
		}
	}

	password[length] = '\0';
}
/**
 * main - generate password or elf file
 * Return: Always returns 0;
 */
int main(void)
{

	int passwordLength = 12;
	char password[13];

	srand(time(NULL));
	generateRandomPassword(password, passwordLength);
	printf("%s", password);

	return (0);
}
