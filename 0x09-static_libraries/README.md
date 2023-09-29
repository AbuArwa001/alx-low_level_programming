# 09. C - Static libraries
### Building And Using Static And Shared "C" Libraries
One of the problems with developed programs, is that they tend to grow larger and larger, bringing up overall compilation and linking time to a large figure, and polluting out makefile, and the directory where we placed the source files. The first time a program we write reaches this state, is normally when we look for a different way to manage our projects.

It is this point where we start thinking about combining out source code into small units of related files, that can be managed with a separate makefile, possibly by a different programmer (for a multi-programmer project).

### What Is A "C" Library? What Is It Good For?
One of the tools that compilers supply us with are libraries. A library is a file containing several object files, that can be used as a single entity in a linking phase of a program. Normally the library is indexed, so it is easy to find symbols (functions, variables and so on) in them. For this reason, linking a program whose object files are ordered in libraries is faster than linking a program whose object files are separate on the disk. Also, when using a library, we have fewer files to look for and open, which even further speeds up linking.

Unix systems (as well as most other modern systems) allow us to create and use two kinds of libraries - static libraries and shared (or dynamic) libraries.

Static libraries are just collections of object files that are linked into the program during the linking phase of compilation, and are not relevant during runtime. This last comment seems obvious, as we already know that object files are also used only during the linking phase, and are not required during runtime - only the program's executable file is needed in order to run the program.

Shared libraries (also called dynamic libraries) are linked into the program in two stages. First, during compile time, the linker verifies that all the symbols (again, functions, variables and the like) required by the program, are either linked into the program, or in one of its shared libraries. However, the object files from the dynamic library are not inserted into the executable file. Instead, when the program is started, a program in the system (called a dynamic loader) checks out which shared libraries were linked with the program, loads them to memory, and attaches them to the copy of the program in memory.

The complex phase of dynamic loading makes launching the program slightly slower, but this is a very insignificant drawback, that is out-weighted by a great advantage - if a second program linked with the same shared library is executed, it can use the same copy of the shared library, thus saving a lot of memory. For example, the standard "C" library is normally a shared library, and is used by all C programs. Yet, only one copy of the library is stored in memory at any given time. This means we can use far less memory to run our programs, and the executable files are much smaller, thus saving a lot of disk space as well.

However, there is one drawback to this arrangement. If we re-compile the dynamic library and try to run a second copy of our program with the new library, we'll soon get stuck - the dynamic loader will find that a copy of the library is already stored in memory, and thus will attach it to our program, and not load the new (modified) version from disk. There are ways around this too, as we'll see in the last section of our discussion.


### Resources
##### Read or watch:

- What Is A “C” Library? What Is It Good For?
- Creating A Static “C” Library Using “ar” and “ranlib”
- Using A “C” Library In A Program
- What is difference between Dynamic and Static library(Static and Dynamic linking) (stop at 4:44)
### Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

**General**

- What is a static library, how does it work, how to create one, and how to use it
- Basic usage of ar, ranlib, nm


#### Requirements
##### General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options ```-Wall -Werror -Wextra -pedantic -std=gnu89```
- All your files should end with a new line
- A ```README.md``` file, at the root of the folder of the project is mandatory
- Your code should use the ```Betty``` style. It will be checked using ```betty-style.pl``` and ```betty-doc.pl```
- You are not allowed to use global variables
- No more than 5 functions per file
- The prototypes of all your functions and the prototype of the function ```_putchar``` should be included in your header file called main.h
- Don’t forget to push your header file
- You are allowed to use the standard library
