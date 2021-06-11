#include <iostream>
#include <string>

using namespace std;

int main(){
    string name;
    cout << "Name: "; std::getline(cin, name); cout << endl;
    cout << name << endl;

    return 0;
}