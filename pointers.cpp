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
    cout << &address << endl; // address of address

    *address = 12;
    cout << *address << endl << val << endl;

    int val2 = 25;
    *address = val2;
    cout << *address << address << endl; // val changes, but the address it is storing stays the same

    int val3 = 1;
    int *address2 = &val3; // can do int* address2 = &val3
    
    printf("Address of address2: %d\n", address2);
    printf("Size of val3: %d bytes\n", sizeof(val3));
    printf("Address of address2 + 1: %d\n", address2+1);

    int *address3 = address2 + 1;
    printf("Address of address2 + 1 aka address3: %d\n", address3);
    // int testing = 1;
    // *address3 = testing;
    printf("Val at address3: %d\n", *address3);
    printf("Address where the next address after address2 is stored: %d\n", address3);


    char char1 = 'a';
    char *charaddress = &char1; 
    printf("Size of a char: %d byte\n", sizeof(char1));\
    printf("Charaddress + 1: %d\n", charaddress+1);


}
