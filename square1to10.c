#include <stdio.h>

#include "easyC.h"

MAIN_START

VAR_CREATE(int, i, 0)

FOR_START(i, 0, <, 10, += 1)

PRINT_VARIABLE("%d\n", i *i);

FOR_END

RETURN(0)

MAIN_END