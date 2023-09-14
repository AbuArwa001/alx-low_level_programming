# 0x04. C - More functions, more nested loops
--------

* A function is a group of statements that together perform a task. Every C program has at least one function, which is main(), and all the most trivial programs can define additional functions.

* You can divide up your code into separate functions. How you divide up your code among different functions is up to you, but logically the division is such that each function performs a specific task.

* A function declaration tells the compiler about a function's name, return type, and parameters. A function definition provides the actual body of the function.

* The C standard library provides numerous built-in functions that your program can call. For example, strcat() to concatenate two strings, memcpy() to copy one memory location to another location, and many more functions.

* A function can also be referred as a method or a sub-routine or a procedure, etc.

### Defining a Function
The general form of a function definition in C programming language is as follows −
~~~
return_type function_name( parameter list ) {
   body of the function
}
~~~

### Function Declarations
A function declaration tells the compiler about a function name and how to call the function. The actual body of the function can be defined separately.

A function declaration has the following parts −

~~~ 
return_type function_name( parameter list );
~~~
### Calling a Function
While creating a C function, you give a definition of what the function has to do. To use a function, you will have to call that function to perform the defined task.

When a program calls a function, the program control is transferred to the called function. A called function performs a defined task and when its return statement is executed or when its function-ending closing brace is reached, it returns the program control back to the main program.

To call a function, you simply need to pass the required parameters along with the function name, and if the function returns a value, then you can store the returned value. 

### Function Arguments
If a function is to use arguments, it must declare variables that accept the values of the arguments. These variables are called the formal parameters of the function.

Formal parameters behave like other local variables inside the function and are created upon entry into the function and destroyed upon exit.

While calling a function, there are two ways in which arguments can be passed to a function −

|Sr.No.     |	Call Type & Description |
|-----------|--------------------
|1	        |  Call by value
|           |   This method copies the actual value of an argument into the      |            |    formal parameter of the function. In this case, changes made to |            |      the parameter inside the function have no effect on the |argument.
|2.               |	Call by reference 
||This method copies the address of an argument into the formal parameter. Inside the function, the address is used to access the actual argument used in the call. This means that changes made to the parameter affect the argument.

* By default, C uses call by value to pass arguments. In general, it means the code within a function cannot alter the arguments used to call the function.

## Table of contents
1. [**Task 0 - isupper**](0-isupper.c)
2. [**Task 1 - isdigit**]()
3. [**Task 2 - Collaboration is multiplication**]()
4. [**Task 3 - The numbers speak for themselves**]()
5. [**Task 4 - I believe in numbers and signs**]()
6. [**Task 5 - Numbers constitute the only universal language**]()
7. [**Task 6 - The shortest distance between two points is a straight line**]()
8. [**Task 7 - I feel like I am diagonally parked in a parallel universe**]()
9. [**Task 8 - You are so much sunshine in every square inch**]()
10. [**Task 9 - Fizz-Buzz**]()
11. [**Task 10 - Triangles**]()

#### Task 0 - isupper  ####

* Write a function that checks for uppercase character.

Prototype: ```int _isupper(int c);```
Returns 1 if c is uppercase
Returns 0 otherwise
* FYI: The standard library provides a similar function: isupper. Run man isupper to learn more.
~~~
julien@ubuntu:~/0x04$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isuper
julien@ubuntu:~/0x04$ ./0-isuper 
A: 1
a: 0
julien@ubuntu:~/0x04$ 
~~~
  
### Task 1 - isdigit ###
mandatory
* Write a function that checks for a digit (0 through 9).

Prototype: ```int _isdigit(int c);```
Returns 1 if c is a digit
Returns 0 otherwise
* FYI: The standard library provides a similar function: isdigit. Run man isdigit to learn more.
~~~
julien@ubuntu:~/0x04$ cat 1-main.c 
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-isdigit.c -o 1-isdigit
julien@ubuntu:~/0x04$ ./1-isdigit 
0: 1
a: 0
julien@ubuntu:~/0x04$ 
~~~
  
#### Task 2 - Collaboration is multiplication

* Write a function that multiplies two integers.

Prototype: ```int mul(int a, int b);```
~~~
julien@ubuntu:~/0x04$ cat 2-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-mul.c -o 2-mul
julien@ubuntu:~/0x04$ ./2-mul 
100352
-1646592
julien@ubuntu:~/0x04$ 
~~~
#### Task 3 - The numbers speak for themselves ####
Write a function that prints the numbers, from 0 to 9, followed by a new line.

Prototype: ```void print_numbers(void);```
You can only use _putchar twice in your code
julien@ubuntu:~/0x04$ cat 3-main.c 
~~~
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers();
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-print_numbers.c -o 3-print_numbers
julien@ubuntu:~/0x04$ ./3-print_numbers | cat -e
0123456789$
julien@ubuntu:~/0x04$ 
~~~
  
#### Task 4 - I believe in numbers and signs ####

* Write a function that prints the numbers, from 0 to 9, followed by a new line.

Prototype: ```void print_most_numbers(void);```
Do not print 2 and 4
You can only use _putchar twice in your code
~~~
julien@ubuntu:~/0x04$ cat 4-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_most_numbers();
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_most_numbers.c -o 4-print_most_numbers
julien@ubuntu:~/0x04$ ./4-print_most_numbers 
01356789
julien@ubuntu:~/0x04$ 
~~~
  
#### Task 5 - Numbers constitute the only universal language ####
* Write a function that prints 10 times the numbers, from 0 to 14, followed by a new line.

- Prototype: ```void more_numbers(void);```
- You can only use [_putchar]() three times in your code
~~~
julien@ubuntu:~/0x04$ cat 5-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    more_numbers();
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-more_numbers.c -o 5-more_numbers
julien@ubuntu:~/0x04$ ./5-more_numbers 
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
julien@ubuntu:~/0x04
~~~
  
#### Task 6 - The shortest distance between two points is a straight line ####
* Write a function that draws a straight line in the terminal.

* Prototype: ```void print_line(int n); ```
- You can only use _putchar function to print
- Where n is the number of times the character _ should be printed
- The line should end with a \n
 -If n is 0 or less, the function should only print \n
 ~~~
julien@ubuntu:~/0x04$ cat 6-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-print_line.c -o 6-lines
julien@ubuntu:~/0x04$ ./6-lines | cat -e
$
__$
__________$
$
~~~

#### Task 7 -I feel like I am diagonally parked in a parallel universe   ####
* Write a function that draws a diagonal line on the terminal.

 * Prototype: ```void print_diagonal(int n); ```
 * You can only use _putchar function to print
 * Where n is the number of times the character \ should be printed
 * The diagonal should end with a \n
 If n is 0 or less, the function should only print a \n
~~~
julien@ubuntu:~/0x04$ cat 7-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_diagonal.c -o 7-diagonals
julien@ubuntu:~/0x04$ ./7-diagonals | cat -e
$
\$
 \$
\$
 \$
  \$
   \$
    \$
     \$
      \$
       \$
        \$
         \$
$
julien@ubuntu:~/0x04$ 
~~~
 
  
#### Task 8 - You are so much sunshine in every square inch ####
* Write a function that prints a square, followed by a new line.

* Prototype: ```void print_square(int size);```
* You can only use _putchar function to print
* Where size is the size of the square
* If size is 0 or less, the function should print only a new line
* Use the character # to print the square
~~~
julien@ubuntu:~/0x04$ cat 8-main.c 
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_square(2);
    print_square(10);
    print_square(0);
    return (0);
}

julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-print_square.c -o 8-squares
julien@ubuntu:~/0x04$ ./8-squares 
##
##
##########
##########
##########
##########
##########
##########
##########
##########
##########
##########
~~~

#### Task 9 - Fizz-Buzz ####
The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.

* Write a program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz.

* Each number or word should be separated by a space
* You are allowed to use the standard library
~~~
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-fizz_buzz.c -o 9-fizz_buzz
julien@ubuntu:~/0x04$ ./9-fizz_buzz 
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz 26 Fizz 28 29 FizzBuzz 31 32 Fizz 34 Buzz Fizz 37 38 Fizz Buzz 41 Fizz 43 44 FizzBuzz 46 47 Fizz 49 Buzz Fizz 52 53 Fizz Buzz 56 Fizz 58 59 FizzBuzz 61 62 Fizz 64 Buzz Fizz 67 68 Fizz Buzz 71 Fizz 73 74 FizzBuzz 76 77 Fizz 79 Buzz Fizz 82 83 Fizz Buzz 86 Fizz 88 89 FizzBuzz 91 92 Fizz 94 Buzz Fizz 97 98 Fizz Buzz
julien@ubuntu:~/0x04$ 
~~~

#### Task 10. Triangles ####
Write a function that prints a triangle, followed by a new line.

* Prototype: ```void print_triangle(int size);```
* You can only use _putchar function to print
* Where size is the size of the triangle
* If size is 0 or less, the function should print only a new line
* Use the character # to print the triangle
~~~
julien@ubuntu:~/0x04$ cat 10-main.c 
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-print_triangle.c -o 10-triangles
julien@ubuntu:~/0x04$ ./10-triangles 
 #
##
         #
        ##
       ###
      ####
     #####
    ######
   #######
  ########
 #########
##########
#

julien@ubuntu:~/0x04$ ./10-triangles | tr ' ' . | cat -e
.#$
##$
.........#$
........##$
.......###$
......####$
.....#####$
....######$
...#######$
..########$
.#########$
##########$
#$
$
~~~
