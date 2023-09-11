Fun facts about the preprocessor:

- It doesn't generate assembly code
- It does not link our code with libraries
- It removes all comments
- It doesn't generate object code
- Steps of compilation:
> 1. Precprocessor 2. Compiler 3. Assembler 4. Linker

More fun facts about compilation and processing:
***

- There are in-built macros
> `__FILE__` expands the name of the current input file in the form of a C string constant
> `__TIME__` which gives the time at the moment
- NULL is a macro og `(void *)0`
- The `GCC` option that runs only the preprocessor is `-E`
- `#ifndefine MAIN_H` is the way to start off a macro
- Use fuards in header files to avoid the problem of double inclusion. eg. `#pragma once`