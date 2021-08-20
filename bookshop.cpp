#include <iostream>

using namespace std;
// Maybe have a txt file just to store books after the program is ran. Will just contain quantities of each book, maybe a log/receipt log. 

class Book{
    private:
        char *author, *title, *publisher;

    public:

};



int main(){
    // Using pointers to update the exact variable. Variable associated with memory address (physically on ram), address has value (the variable's value).
    // & (address-of operator). * (dereference operator)
    // Declaring a pointer is interesting. type * var_name. The type is what the pointer is pointing to. The pointer vs the data it is pointing to.
    // Btw, the * is not the same as the dereference operator, the asterisk is used to denote that it is a pointer.
    int firstvalue, secondvalue;
    int * mypointer; // same as int * mypointer; 

    // Assign mypointer the value of the firstvalue's address in physical memory. Then assign the value associated with firstvalue's address to 10 (memory location), essentially the same as int firstvalue = 10; 
    mypointer = &firstvalue;
    *mypointer = 10;
    cout << mypointer << endl << firstvalue << endl << &firstvalue << endl;
    mypointer = &secondvalue;
    *mypointer = 20;
    cout << mypointer << endl << secondvalue << endl << &secondvalue << endl;

    return 0;
}