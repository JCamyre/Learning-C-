#include <iostream>
#include <cmath>
#include <string>

// #include <module_name> is how we import modules!!

using namespace std;

int main()
{
    string user_name = "Joseph";
    int age;
    age = 18;
    // double is a more precise float, so better.
    double body_fat = 20.2;
    cout << "Hello World! My name is " << user_name << "!" << endl;
    cout << "I am " << age << " years old\n";
    cout << "I am also " << body_fat << "% body fat ";
    body_fat = 19.6;
    // endl equivalent to \n
    cout << "Actually, I am " << body_fat << "% body fat" << endl;

    // So you can't use "" for strings and have to use '' for chars. Only one character long.
    char grade = 'A';
    bool is_cool = true;

    cout << "Length of name: " << user_name.length() << endl;
    cout << "First letter of name: " << user_name[0] << endl;
    cout << user_name.find("ose", 0) << endl;

    string greeting = "Hello there, what's your name?";

    // .substr() sorta like str[0:2], except second value is length of substring
    cout << greeting.substr(8, 7) << endl;
    
    cout << 2 + 2.2 * 3 / 4.5 << endl;
    cout << pow(4, 4) << " " << round(4.5) << " " << ceil(4.4) << " " << floor(4.6) << " " << fmax(4, 100) << " " << fmin(4, 100) << endl;

    string name;
    cout << "Enter your name: ";
    // getline good for an entire line of string
    getline(cin, name);


    cout << "So your name is: " << name << "Is that correct?" << endl;

    // Calculator
    double num_1, num_2;
    char operation;

    cout << "Enter first number: " << endl;
    cin >> num_1;
    cout << "Enter second number: " << endl;
    cin >> num_2;
    cout << "Choose operation: +, -, *, or /." << endl;
    cin >> operation;

    return 0;
}