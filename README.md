# easyC

Write C with the macros, which are written to make the c syntax easier.

for example,

Instead of writing this,

```c
int main(){
  int i = 0;
  for(i = 0; i < 10; i += 1){
    printf("%d\n", i *i);;
  }
  return 0;
}
```

You can write this,

```c
MAIN_START

VAR_CREATE(int, i, 0)

FOR_START(i, 0, <, 10, += 1)

PRINT_VARIABLE("%d\n", i *i);

FOR_END

RETURN(0)

MAIN_END
```

## How to use it?

Just include the `easyC.h` file into your source code(C file) and use the syntax defined in the easyC.h.

```c
#include "easyC.h"
```

## How to compile the files?

```bash
gcc -c your_file.c
gcc your_file.o
./a.out
```

or, use it in a single line

```bash
gcc -c your_file.c && gcc your_file.o && ./a.out
```
