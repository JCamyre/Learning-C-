#include <iostream>
#include <cmath>
#include <string>

// #include <module_name> is how we import modules!!

using namespace std;

// Calculator. We could put void for the function if it doesn't return anything. Put the data type of the returned value if it does.
double calculator() {
    // Do the input outside of the function
    double num_1, num_2;
    char operation;

    cout << "Enter first number: ";
    cin >> num_1;
    cout << "Enter second number: ";
    cin >> num_2;
    cout << "Choose operation: +, -, *, or /.: ";
    cin >> operation;
 
    if (operation == '+') {
        return num_1 + num_2;
    } else if (operation == '-') {
        return num_1 - num_2;
    } else if (operation == '*') {
        return num_1 * num_2;
    } else {
        return num_1 / num_2;
    }
};

string greetings(string user_name) {
    cout << "Length of name: " << user_name.length() << endl;
    cout << "First letter of name: " << user_name[0] << endl;
    cout << user_name.find("ose", 0) << endl;

    string greeting = "Hello there, what's your name?";
    cout << greeting.substr(8, 7) << endl;

    return greeting;
};


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

    greetings("yomadude");

    // .substr() sorta like str[0:2], except second value is length of substring
    
    cout << 2 + 2.2 * 3 / 4.5 << endl;
    cout << pow(4, 4) << " " << round(4.5) << " " << ceil(4.4) << " " << floor(4.6) << " " << fmax(4, 100) << " " << fmin(4, 100) << endl;

    // string name;
    // cout << "Enter your name: ";
    // // getline good for an entire line of string
    // getline(cin, name);


    // cout << "So your name is: " << name << "Is that correct?" << endl;

   
    int nums[10] = {23, 24, 1, 2, 4};
    nums[0] = 100;
    cout << nums << endl;

    bool is_cool = true;
    bool is_smart = true;
    bool is_muscular = true;
    if (is_cool && is_smart && is_muscular) {
        cout << "You must be Joseph, very cool!" << endl;
    } else if (!is_cool && !is_muscular) {
        cout << "You are Erich!" << endl;
    } else {
        cout << "Yikes not me, it's okay there is only one me" << endl;
    };

    double results = calculator();
    cout << results << endl;

    return 0;
}