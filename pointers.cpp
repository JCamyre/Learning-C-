#include <iostream>

using namespace std;

// Look up table, key is variable name, value is address in memory
// Memory address is just an integer somewhere in the memory
// int *p; declares pointer
// int a; int *p; p would return the address of where a is stored in the memory.
// So you have to do int *p to declare a pointer variable, then do p = &a to assign it the address of int a (we r operating on variable p, I like that word)
// You can do *p to return the value of the variable's address it is storing (a). DEREFERENCING. 
// *p = 8, changes value of a to 8. 

int main(){

    int val;
    int *address;
    address = &val;
    cout << address << endl;
    val = 10;
    // address = &val; not necessary, address is linked to the address of val, so it auto updates
    cout << address << endl;
    cout << *address << endl; // dereferencing

    return 0;
}
