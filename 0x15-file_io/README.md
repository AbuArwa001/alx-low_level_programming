# 0x15. C - File I/O


#### Introduction to Files in C:
A File is a collection of data stored in the secondary memory. So far data was entered
into the programs through the keyboard. So Files are used for storing information that can be
processed by the programs. Files are not only used for storing the data, programs are also stored
in files. In order to use files, we have to learn file input and output operations. That is, how data
is read and how to write into a file.
A Stream is the important concept in C. The Stream is a common, logical interface to the
various devices that comprise the computer. So a Stream is a logical interface to a file. There are
two types of Streams, Text Stream and Binary Stream. A Text File can be thought of as a stream
of characters that can be processed sequentially. It can only be processed in the forward
direction

#### Resources
Read or watch:

- open
- close
- read
- write
- dprintf

#### Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

#### General
- Look for the right source of information online
- How to create, open, close, read and write files
- What are file descriptors
- What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
- How to use the I/O system calls open, close, read and write
- What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
- What are file permissions, and how to set them when creating a file with the open system call
- What is a system call
- What is the difference between a function and a system call

#### Requirements
##### General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options ```-Wall -Werror -Wextra -pedantic -std=gnu89```
- All your files should end with a new line
- A ```README.md``` file, at the root of the folder of the project is mandatory
- Your code should use the ```Betty``` style. It will be checked using ```betty-style.pl``` and ```betty-doc.pl```
- The only C standard library functions allowed are ```malloc``` and ```free```. Any use of functions like ```printf```, ```puts```, ```calloc```, ```realloc``` etc… is forbidden
- You are allowed to use _putchar
You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into acc
- No more than 5 functions per file
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
- Don’t forget to push your header file
- All your header files should be include guarde

