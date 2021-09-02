#include <iostream>

using namespace std;
// call by reference. Helps with dealing with scope (local variable, global variable)

// showing the local variable "var" are not the same in main() and func(), as they are both local variables

// When a program is started, computer sets aside some memory for it to execute.
// Split up into heap, stack (where all the local variables are stored), static/global (variables), code (what you write, the instructions)
// The text segment, stack, and static/global variables. They are fixed and won't change once program starts running
// For heap segment, the program can ask for more memory. 
// main function is invoked first
// Each function has stack frame in stack segment. Keeps track of its variables. 
// "Control", clears the stack frame of func, lifetime of local variable is during the time the function is executing
// "Call stack"/"function call stack": top of the stack is the current function being executed (RECURSION). 
// Since there is only a certain amount of memory set aside for the stack, if we have infinite loop/recursion, then the memory of this stack will overflow, and our program will crash.
// main() is a calling function and it's argument being passed is "actual argument", func called function and "formal argument"
// Argument is "mapped" to formal argument, variable's value is copied and used in function. This type of function call is called: "call by value". We are not altering the actual argument.
// To fix this, use pointers
// POG ACTUAL USE CASE FOR POINTERS
// CALL BY REFERENCE (use pointers as arguments). Can save us a lot of memory, instead of creating a copy of a large and complex data type, we just reference back to original argument variable. We would've doubled our memory usage!! (for that function call)
// Basically global variable

void func(int var){
    var++;
    printf("Address of variable 'var' in func(): %d\n", &var);
}

void birthday(int *age){
    *age = *age+1;
    printf("Age: %d, address of variable: %d\n", *age, age);
}

int main(){
    int var = 0;
    printf("Address of variable 'var' i main(): %d\n", &var);
    func(var);

    int age = 18;
    printf("Age: %d, address of variable: %d\n", age, &age);
    birthday(&age);

    // declare variable. pass in address of variable(pointer). argument accepts address/pointers. dereference address and alter variable. call by reference.

    return 0;
}