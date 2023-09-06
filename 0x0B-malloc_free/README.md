- Memory Allocation and Freeing
***
 are obviously part of what a low level language like C expects of the developer. Inf fact, a developer must get conscious on what they use their space and allocations for. It is not like Python that is smart to get rid of things for you. 

This project introduces memory checkers such as Valgrind, an open source software plug, that works fairly effectively. Then there is the matter of string literals and .rodata. For the latter two, I will be making use of objdump.

- Relevant and Required Software
***
1. Ubuntu 20.04 LTS with GCC `-Wall -Werror -Wextra -pedantic -std=gnu89`
2. Valgrind and objdump
3. `vi`, `vim` and `emacs`
5. Standard C libraries (standard input/output, standard library, headers, etc)
6. Betty Linter

- Limitations
***
Nothing is as accurate as you think it is, simply because I can't share the accuracy of my code with you. That's for my remote teacher to know, and you to find out

- Contributions
***
Contributions, as always, are welcome