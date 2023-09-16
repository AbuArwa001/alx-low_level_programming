#ifndef MAIN_H
#define MAIN_H
/**
* _putchar - prints one character to screen
*@c: charcter to be printed
*
* Return: returns 1 on succes and -1 on error
*
*/
int _putchar(char c);
/**
* print_alphabet - prints alphabets from a-z
*
*
*/
void print_alphabet(void);
/**
* print_alphabet_x10 - prints alphabets from a-z
*                      x10
*
*/
void print_alphabet_x10(void);
/**
* _islower - Write a function that checks for lowercase characte
* @c: character to be tested
*               Prototype: int _islower(int c);
*               Returns 1 if c is lowercase
* Return: returns 0  otherwise
*          returns 1 if c is lowercase
*
*/
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);

#endif /* MAIN_H */
