 # 0x0E. C - Structures, typedef
![STRUCTURES](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2021/3/50af78a28a081e809856d4cdbde2d7ca9d4aa93d.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20231009%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20231009T094019Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=72b71acf8eb92c78ce0640a585bbc42db6cfd94f1a4f39335afc4a8d7db8e086)

A **struct** in the C programming language (and many derivatives) is a composite data type (or record) declaration that defines a physically grouped list of variables under one name in a block of memory, allowing the different variables to be accessed via a single pointer or by the struct declared name which returns the same address. The struct data type can contain other data types so is used for mixed-data-type records such as a hard-drive directory entry (file length, name, extension, physical address, etc.), or other mixed-type records (name, address, telephone, balance, etc.).

#### Resources
##### Read or watch:

- 0x0d. Structures.pdf
- struct (C programming language)
- Documentation: structures
- 0x0d. Typedef and structures.pdf
- ``typedef```
- Programming in C by Stephen Kochan - Chapter 8, Working with Structures p163-189
- The Lost Art of C Structure Packing (Advanced - not mandatory)
#### Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

##### General
- What are structures, when, why and how to use them
- How to use typedef

#### Requirements
##### General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options ```-Wall -Werror -Wextra -pedantic -std=gnu89```
- All your files should end with a new line
- A ```README.md``` file, at the root of the folder of the project is mandatory
- Your code should use the ```Betty``` style. It will be checked using ```betty-style.pl``` and ```betty-doc.pl```
- The only C standard library functions allowed are ```malloc``` and ```free```. Any use of functions like ```printf```, ```puts```, ```calloc```, ```realloc``` etc… is forbidden
- You are not allowed to use global variables
- No more than 5 functions per file
- The prototypes of all your functions and the prototype of the function ```_putchar``` should be included in your header file called main.h
- Don’t forget to push your header file
- You are allowed to use the standard library


#### Task 0 -  Poppy
![Poppy](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2021/3/3b534d73d79949ef8b7535d462014518256953f2.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20231009%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20231009T094754Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=63407d757f330320f0a4b9cc4bbd051e19fb10238decc3f70ebc351c2459519b)
Define a new type struct dog with the following elements:

- ```name```, type = ```char *```
- ```age```, type = ```float```
- ```owner```, type = ```char *```
~~~
julien@ubuntu:~/0x0d. structures, typedef$ cat 0-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
julien@ubuntu:~/0x0d. structures, typedef$ ./a 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$
~~~
  
#### Task 1 - A dog is the only thing on earth that loves you more than you love yourself
Write a function that initialize a variable of type struct dog

- Prototype: ```void init_dog(struct dog *d, char *name, float age, char *owner);```
~~~
julien@ubuntu:~/0x0d. structures, typedef$ cat 1-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-init_dog.c -o b
julien@ubuntu:~/0x0d. structures, typedef$ ./b 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
~~~
  
#### Task 2 - A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
![Love](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2021/3/bb940d2ab10c3a4740f3c154cb980133e65e438e.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20231009%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20231009T094754Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=14e8da161cc03f214f6149fe7a35483d298eb4546c698f3a843115e8080c5848)
Write a function that prints a struct dog

- Prototype: ```void print_dog(struct dog *d);```
- Format: see example bellow
- You are allowed to use the standard library
- If an element of d is``` NULL```, print (nil) instead of this element. (if ```name``` is ```NULL```, print ```Name```: ```(nil))```
- If d is ```NULL``` print nothing.
- You are allowed to use the standard library
~~~
julien@ubuntu:~/0x0d. structures, typedef$ cat 2-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_dog.c -o c
julien@ubuntu:~/0x0d. structures, typedef$ ./c 
Name: Poppy
Age: 3.500000
Owner: Bob
julien@ubuntu:~/0x0d. structures, typedef$ 
~~~
  
#### Task 3 - Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
![Book](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2021/3/9ef84b3fd1636992602868e45d3062719326de0e.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20231009%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20231009T094754Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=88302084d272c0b1f5abcbfcbd6ee08a17dd1e92803cd12ce2f705a7fa9ecc12)

Define a new type ```dog_t``` as a new name for the type struct dog.
~~~
julien@ubuntu:~/0x0d. structures, typedef$ cat 3-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
julien@ubuntu:~/0x0d. structures, typedef$ ./d 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
~~~
  
#### Task 4 - A door is what a dog is perpetually on the wrong side of
![wrong_side](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2021/3/8c1e394774fb8d25e0bbbb73a75ebc7de0c80745.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20231009%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20231009T094754Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=32c88b6d9c3a93db23917231a2a26245593a31d877eb78da053b0d48eda285f9)

Write a function that creates a new dog.

- Prototype: ```dog_t *new_dog(char *name, float age, char *owner);```
- You have to store a copy of name and owner
- Return ```NULL``` if the function fails
~~~
julien@ubuntu:~/0x0d. structures, typedef$ cat 4-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-new_dog.c -o e
julien@ubuntu:~/0x0d. structures, typedef$ ./e
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
~~~
#### Task 5 - How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
![](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2021/3/683112dbdd805c36a9b366cede0653dd80da5ec3.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20231009%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20231009T094754Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=09b398578601f67cfdf57357de462499597c0facc54c61b411461f7c90ded109)

Write a function that frees dogs.

- Prototype: ```void free_dog(dog_t *d);```
~~~
julien@ubuntu:~/0x0d. structures, typedef$ cat 5-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-free_dog.c 4-new_dog.c -o f
julien@ubuntu:~/0x0d. structures, typedef$ valgrind ./f
==22840== Memcheck, a memory error detector
==22840== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22840== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22840== Command: ./f
==22840== 
My name is Poppy, and I am 3.5 :) - Woof!
==22840== 
==22840== HEAP SUMMARY:
==22840==     in use at exit: 0 bytes in 0 blocks
==22840==   total heap usage: 4 allocs, 4 frees, 1,059 bytes allocated
==22840== 
==22840== All heap blocks were freed -- no leaks are possible
==22840== 
==22840== For counts of detected and suppressed errors, rerun with: -v
==22840== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x0d. structures, typedef$ 
~~~
