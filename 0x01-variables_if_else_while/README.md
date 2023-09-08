# 0x01. C - Variables, if, else, while
* This following are C programming Tasks that demonstrate the use of
  variables, if, else and while loops:
  Resources

##### Read or watch: #####

   * Everything you need to know to start with C.pdf (You do not have to learn everything in there yet, but make sure you read it entirely first and make sure you understand the slides: “comments”, “Data types | Integer types”, “Declaration”, “Characters”, “Arithmetic operators”, “Variables assignments”, “Comparisons”, “Logical operators”, “if, if…else”, “while loops”.)
   * Keywords and identifiers
   * integers
   * Arithmetic Operators in C
   * If statements in C
   * if…else statement
   * Relational operators
   * Logical operators
   * while loop in C
   * While loop

##### man or help: #####
 - ascii
 
#### **Table of Contents** ####
1.![**0. Positive anything is better than negative nothing**]()
2.![]
3.

#### Task 0 - Positive anything is better than negative nothing ####

* This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.

    * You can find the source code here
    * The variable n will store a different value every time you will run this program
    * You don’t have to understand what rand, srand, RAND_MAX do. Please do not touch this code
    * The output of the program should be:
        * The number, followed by
           - if the number is greater than 0: is positive
           - if the number is 0: is zero
           - if the number is less than 0: is negative
        followed by a new line
~~~
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-520693284 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-973398895 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-199220452 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
266853958 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-48147767 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
0 is zero
julien@ubuntu:~/0x01$ 
~~~