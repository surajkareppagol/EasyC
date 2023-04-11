/**************************************************************/

/*
  This project EasyC includes different syntax defined for C Language
  using the C Macros.

  This file easyC.h need to be included in your project directory, since it's still in development.

  Section :

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
*/

/**************************************************************/

/* Section - Macros for main() function definition */

/**************************************************************/

/*
  Start of main() definition without any arguments.
*/
#define MAIN_START \
  int main()       \
  {

/*
  End of main() definition without arguments.
*/
#define MAIN_END }

/*
  Start of main() definition with arguments, argc and argv.
*/
#define MAIN_START_ARGS     \
  int main(int argv, *argc) \
  {

/*
  End of main() definition with arguments.
*/
#define MAIN_END_ARGS }

/**************************************************************/

/* Section - Macros for working with VARIABLES  */

/**************************************************************/

/*
  Create a variable and initialise it to some value, provide data type, variable name and initial value to the macro.

  Warning : The value should be in accordance with the data type.Since there is no checking involved it might result in an error.
*/
#define VAR_CREATE_IN(dataType, VariableName, initialValue) \
  dataType VariableName = initialValue;

/*
  Create an uninitialized variable , provide data type, variable name to the macro.

  Warning : The value should be in accordance with the data type.Since there is no checking involved it might result in an error.
*/
#define VAR_CREATE_UN(dataType, VariableName) \
  dataType VariableName;

/*
  Assign new value to a variable, provide the variable name and the value to be assigned to the macro.

  Warning : The value should be in accordance with the data type. Since there is no checking involved it might result in an error.
*/
#define VAR_ASSIGN(variableName, value) \
  variableName = value;

/**************************************************************/

/* Section - Macros for working with Arrays */

/**************************************************************/

/*
  Create an Array and initialise it to zero, provide the data type, array name and size to the macro.

  Warning : The value should be in accordance with the data type. Since there is no checking involved it might result in an error.
*/
#define ARRAY_CREATE_ZERO(dataType, arrayName, size) \
  dataType arrayName[size] = {0};

/*
  Create an Array and initialise it to a value, provide the data type, array name, size and the value to the macro. Here value should be in the form {value}, separated by commas.

  Warning : The value should be in accordance with the data type. Since there is no checking involved it might result in an error.
*/
#define ARRAY_CREATE_DATA(dataType, arrayName, size, value) \
  dataType arrayName[size] = value;

/**************************************************************/

/* Section - Macros for working with return keyword */

/**************************************************************/

/*
  Return Zero.

  Warning : Appropriate value should be returned. Since there is no checking involved it might result in an error.
*/
#define RETURN_ZERO return 0;

/*
  Return One.

  Warning : Appropriate value should be returned. Since there is no checking involved it might result in an error.
*/
#define RETURN_ONE return 1;

/*
  Return -1.

  Warning : Appropriate value should be returned. Since there is no checking involved it might result in an error.
*/
#define RETURN_ERROR return -1;

/*
  Return a value using the return keyword, provide the return value to the macro.

  Warning : Appropriate value should be returned. Since there is no checking involved it might result in an error.
*/
#define RETURN_VALUE(value) return value;

/**************************************************************/

/* Section - Macros for working with printf() */

/**************************************************************/

/*
  Print string messages to the console.
*/
#define PRINT_NORMAL(message) printf(message);

/*
  Print variable value to the console, provide the format specifier and variable name to the macro. format specifier should be enclosed within "".
*/
#define PRINT_VARIABLE(formatSpecifier, variableName) \
  printf(formatSpecifier, variableName);

/**************************************************************/

/* Section - Macros for working with scanf() */

/**************************************************************/

/*
  Scan a single value to a variable (assuming the variable is initialized), provide format specifier and variable name to macro.
*/
#define SCAN_NORMAL(formatSpecifier, variableName) scanf(formatSpecifier, &variableName);

/*
  Scan a string, provide the variable name to the macro.
*/
#define SCAN_STR(variableName) scanf("%s", variableName);

/**************************************************************/

/* Section - Macros for working with Functions */

/**************************************************************/

/*
  Start of the function, provide function name and return type to macro.
*/
#define FUNCTION_START(functionName, returnType) \
  returnType functionName()                      \
  {

/*
  End of the function.
*/
#define FUNCTION_END }

/**************************************************************/

/* Section - Macros for working with For Loops */

/**************************************************************/

/*
  Start of the for loop, provide condition (only mathematical) to the macro.
  Provide the variable name (assuming it's already initialised), initial value for loop, the condition (only mathematical), end value (the value at which the loop should terminate), and update operation in mathematical way, like += 1, -= 1 etcetera.
*/
#define FOR_START(variableName, initialValue, condition, endValue, updateBy)                \
  for (variableName = initialValue; variableName condition endValue; variableName updateBy) \
  {

/*
  End of the for loop.
*/
#define FOR_END }

/**************************************************************/

/* Section - Macros for working with While Loops */

/**************************************************************/

/*
  Start of the while loop, provide condition (only mathematical) to the macro.
*/
#define WHILE_START(condition) \
  while (condition)            \
  {

/*
  Provide update operation to the while loop. This is written as separate macro because the update can happen after other operations or before, so this macro makes it flexible to use the condition.
*/
#define WHILE_CONDITION(condition) condition;

/*
  End of the while loop.
*/
#define WHILE_END }

/**************************************************************/

/* More Syntax are being converted to macros.*/