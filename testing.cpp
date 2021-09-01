#include <iostream>
#include <string>

using namespace std;

// How recursion work doe
int recursion(int n){
    if(n==0){
        return 1;
    } else {
        return n * recursion(n-1);
    }
}

int main(){
    // string *name;
    // name = new string[20];

    // // dereferencing pointer
    // cout << *name << endl;   
    // string test; 
    // cin.ignore();
    // cin >> test;

    // New way of doing for loop, much more convenient
    // int arr[3] = {1, 2, 3};
    // for (int x: arr) { // for (i = 0; i < n; i++) {}
    //     cout << x << endl;
    // }
    int p = 5;
    int *pointer = &p;
    std::cout << p << std::endl << pointer << std::endl << *pointer << std::endl; 

    cout << recursion(5) << endl;

    return 0;
}