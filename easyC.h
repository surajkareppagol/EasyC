// Syntax - variables

// Create
#define VAR_CREATE(type, name, value) type name = value;

// Assign
#define VAR_ASSIGN(assignTo, assignValue) assignTo = assignValue;

// Create Array
#define VAR_CREATE_ARRAY(type, name, value, size) type name[size] = value;

// Assign Array Value
#define VAR_ASSIGN_ARRAY(name, value, index) name[index] = value;

// Syntax - printf()

// printf() - Normal
#define PRINT_MESSAGE(message) printf(message);

// printf() - Print Variable
#define PRINT_VARIABLE(type, name) printf(type, name);

// Syntax - scanf()

// scanf() - Normal
#define SCAN(type, name) scanf(type, &name);

// scanf() - String
#define SCAN_STR(name) scanf("%s", name);

// Syntax - Main Function

// main Start
#define MAIN_START int main(){

// main End
#define MAIN_END }

// Syntax - Function

// Function Start
#define FUNCTION_START(returnType, name) returnType name(){

// Function End
#define FUNCTION_END }

// Syntax - For loop

// loop Start
#define FOR_START(loopVariable, initialValue, condition, cValue, updateVariable) \
for(loopVariable = initialValue; loopVariable  condition cValue; loopVariable updateVariable){

// loop End
#define FOR_END }

// Syntax - While loop

// loop Start
#define WHILE_START(loopVariable, condition, value) while(loopVariable condition value){

// loop Condition Update
#define WHILE_CONDITION(condition) condition;

// loop End
#define WHILE_END }

// Syntax - return

// return
#define RETURN(value) return value;