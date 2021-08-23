#include <iostream>

using namespace std;

int main() {
    int a = 5;
    int *p = &a; // pointer to integer (int*). We need to know that so that we can dereference
    printf("%d, %d\n", p, *p);
    *p = 6;
    printf("%d, %d", p, *p);

    int **q; // pointer to pointer (int**), storing the address of a pointer. Think of each * as saying the pointer for that data type
    q = &p;
    printf("%d\n", *(*q)); // double dereference, go to q's stored address, then go to the address of the pointer at q's stored address and return the variable's value

    int ***r; // pointer to pointer to pointer (int ***), ultimately references the address of a
    r = &q;
    printf("%d\n", *(*r));
    printf("%d\n", *(*(*r)));

    ***r = 10; // dereferencing dereferencing dereferencing the value of a and setting it equal to 10;
    printf("%d\n", a);
    **q = *p + 2; // dereferencing dereferencing the value of a and setting the value of *p (dereferenced the value of a) + 2, which would equal 12
    printf("%d\n", a);

    return 0;
}