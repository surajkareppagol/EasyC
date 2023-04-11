#include <stdio.h>
#include "easyC.h"

MAIN_START

VAR_CREATE_IN(int, i, 0)

FOR_START(i, 1, <=, 10, += 1)

PRINT_VARIABLE("%d\n", i)

FOR_END

RETURN_ZERO

MAIN_END
