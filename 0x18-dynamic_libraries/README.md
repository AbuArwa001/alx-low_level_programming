# 0x18. C - Dynamic libraries

## Project Overview

This project focuses on dynamic libraries in the C programming language, providing a deeper understanding of their creation and usage. Learning objectives include `$LD_LIBRARY_PATH` usage, differences between static and shared libraries, and basic tool usage (`nm`, `ldd`, `ldconfig`).

## Project Information

- **Author:** Julien Barbier
- **Weight:** 1
- **Start Date:** Dec 11, 2023, 6:00 AM
- **End Date:** Dec 12, 2023, 6:00 AM
- **Checker Release Date:** Dec 11, 2023, 12:00 PM
- **Auto Review Deadline:** At the project deadline

## Resources

[Difference between Dynamic and Static library](#task-0-a-library-is-not-a-luxury)
[Creating dynamic libraries on Linux](#task-1-without-libraries-what-have-we)

## Learning Objectives

- Understand dynamic libraries, creation, and usage.
- Comprehend `$LD_LIBRARY_PATH` and library differences.
- Learn basic tool usage: `nm`, `ldd`, `ldconfig`.

## Copyright and Plagiarism

- Solutions developed independently.
- No content publishing.

## Requirements

### C

- Editors: vi, vim, emacs
- Compilation on Ubuntu 20.04 LTS using gcc (`-Wall -Werror -Wextra -pedantic -std=gnu89`)
- Header file `main.h` containing prototypes.
- Push header file.

### Bash

- Editors: vi, vim, emacs
- Testing on Ubuntu 20.04 LTS
- Files executable.

## Tasks

### Task 0: A library is not a luxury

Create `libdynamic.so` with provided functions.

```bash
$ gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len
$ ldd len
$ export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
$ ldd len
$ ./len
```
### Task 1: Without libraries what have we?
Create liball.so from all .c files in the current directory.
```bash
$ ./1-create_dynamic_lib.sh
$ nm -D --defined-only liball.so
Repository
GitHub Repository
Directory: 0x18-dynamic_libraries
Files: libdynamic.so, main.h, 1-create_dynamic_lib.sh
```
