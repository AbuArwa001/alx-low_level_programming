#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random lowercase letter
char getRandomLowercaseLetter()
{
	return 'a' + rand() % 26;
}

// Function to generate a random digit
char getRandomDigit()
{
	return '0' + rand() % 10;
}

// Function to generate a random valid password
void generateRandomPassword(char *password, int length)
{
	for (int i = 0; i < length; i++)
	{
		if (i % 2 == 0)
		{
			// Generate a lowercase letter for even positions
			password[i] = getRandomLowercaseLetter();
		}
		else
		{
			// Generate a digit for odd positions
			password[i] = getRandomDigit();
		}
	}

	password[length] = '\0'; // Null-terminate the string
}

int main()
{
	// Seed the random number generator with the current time
	srand(time(NULL));

	// Define the length of the password (adjust as needed)
	int passwordLength = 12;

	// Create an array to store the generated password
	char password[passwordLength + 1]; // +1 for the null terminator

	// Generate a random valid password
	generateRandomPassword(password, passwordLength);

	// Print the generated password
	printf("%s", password);

	return 0;
}
