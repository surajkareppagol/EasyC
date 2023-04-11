# easyC

This project EasyC includes different syntax defined for C Language
using the C Macros.

This file easyC.h need to be included in your project directory, since it's still in development.

## Sections

- Macros for main() function definition
- Macros for working with Variables
- Macros for working with Arrays
- Macros for working with return keyword
- Macros for working with printf()
- Macros for working with scanf()
- Macros for working with Functions
- Macros for working with For Loops
- Macros for working with While Loops

Warning : This project is just for learning purpose don't use it in real world projects as it might produce a lot of bugs.
for example,

## Examples

![Written with easyC](/images/pre-written.png)

After preprocessing,

![After preprocessing](/images/processed.png)

## How to use it?

Include the `easyC.h` file into your source code (C file) and use the syntax defined in the easyC.h.

```c
#include "easyC.h"
```

To compile and run, execute these commands,

```bash
gcc file.c -o file
./file
```

or, use it in a single line

```bash
gcc file.c -o file && ./file
```

To check the final version use, it will generate a text file `preprocessed_file.txt`, which includes the preprocessed code.

```bash
gcc -E file.c >> preprocessed_file.txt
```
