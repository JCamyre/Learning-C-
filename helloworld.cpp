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
    cout << "Choose operation: +, -, *, or /: ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num_2;
    
    // Using if statements for this scenario when set options to choose from, PEPELAUGH
    // if (operation == '+') {
    //     return num_1 + num_2;
    // } else if (operation == '-') {
    //     return num_1 - num_2;
    // } else if (operation == '*') {
    //     return num_1 * num_2;
    // } else {
    //     return num_1 / num_2;
    // }

    double result;
    // Switch cases are op. Much more efficient than if statements. Sorta like accessing value from dictionary (or hashmap).
    switch(operation) {
        case '+':
            result = num_1 + num_2;
            break;
        case '-':
            result = num_1 - num_2;
            break;
        case '*':
            result = num_1 * num_2;
            break;
        default:
            result = num_1 / num_2;
            break;
    }
    return result;
};

string greetings(string user_name) {
    cout << "Length of name: " << user_name.length() << endl;
    cout << "First letter of name: " << user_name[0] << endl;
    cout << user_name.find("ose", 0) << endl;

    string greeting = "Hello there, what's your name?";
    cout << greeting.substr(8, 7) << endl;

    return greeting;
};

// void since only printing stuff out
void guessing_game() {
    int secret_num = 5;
    int guess;
    int guess_count = 1;
    int guess_limit = 10;
    bool out_of_guesses = false;

    cout << "Guess the number between 1 and 10: ";
    cin >> guess;
    while(guess != secret_num) {
        // Could've done && !out_of_guesses, but I did break;
        if (guess_count <= guess_limit) {
            cout << "Incorrect! Try again: ";
            cin >> guess;
            guess_count++;
        } else {
            out_of_guesses = true;
            break;
        }

    };
    
    if (out_of_guesses) {
        cout << "Good job, you failed." << endl;
    } else {
        cout << "Good job, you guessed the correct number, " << secret_num << " after " << guess_count << " guess(es)!" << endl;  
    }
};

int pow_func(int num, int power) {
    int result = 1;
    for(int i=0; i < power; i++) {
        result = result * num;
    }

    return result;
}

class Car {
    public:
        string make;
        string model;
        int year;
        double engine_size;
        // Constructor, runs when initializing instance of Car class. Same as __init__()
        Car() {
            make = "none";
            model = "none";
            year = 2021;
            engine_size = 3.0;
        }

        Car(string aMake, string aModel, int aYear, double aEngine_size) {
            make = aMake;
            model = aModel;
            year = aYear;
            engine_size = aEngine_size;
            cout << "Creating car: " << year << " " << make << " " << model << endl;
        }

        bool isOld(){
            if (year < 2010) {
                return true;
            return false;
        }
    }
};

class Game {
    // private: can only be accessed within the Class. GETTERS AND SETTERS. The setter function is ran internally whenever trying to assign value to attribute.
    private:
        char rating;
    // public: any other code can access these attributes and methods
    public:
        string name;
        string studio;
        int year;

        Game(string aName, string aStudio, int aYear, char aRating){
            name = aName;
            studio = aStudio;
            year = aYear;
            setRating(aRating);
        }

        void setRating(char aRating){
            if (aRating == 'E' || aRating == 'T' || aRating == 'M'){
                rating = aRating;
            } else {
                rating = 'M';
            }
        }

        char getRating(){
            return rating;
        }
};

class Dog{
    public:
        string name;
        double weight;
        string fur_color;
        Dog(string aName, double aWeight, string aFur_color){
            name = aName;
            weight = aWeight;
            fur_color = aFur_color;
        }

        void Bark(){
            cout << "Bark bark bark, shut up" << endl;
        }
};

class BorderCollie : public Dog {
    public:
        BorderCollie(string aName, double aWeight, string aFur_color){
            name = aName;
            weight = aWeight;
            fur_color = aFur_color;
        }

        void fetch() {
            cout << "I just fetched the stick you threw, here you go" << endl;
        }


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

    // double results = calculator();
    // cout << results << endl;

    int i = 0;
    while (i <= 10) {
        cout << i << endl;
        i++;
    }

    // do while loop. do something, then check code. Reverse of regular while loop where you check condition then loop. That's why it prints out 11.
    do{
        cout << i << endl;
        i++;
    }while(i <= 10);

    // guessing_game();

    for(int i = 0; i <= 10; i++) {
        cout << "Looping through for loop, currently on index: " << i << endl;
    };

    int ages[] {18, 21, 19, 24, 23};

    for(int i = 0; i <= 5; i++) {
        cout << ages[i] << endl;
    };

    cout << pow_func(2, 3) << endl;

    // string board[3][3] = {
    //     {"😂", "😂", "😂"},
    //     {"😂", "😂", "😂"},
    //     {"😂", "😂", "😂"}
    // };
    char board[3][3] = {
        {'a', 'b', 'c'},
        {'a', 'b', 'c'},
        {'a', 'b', 'c'}
    };
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    };

    // Pointers, another type of data. Memory address. Variables are containers that hold information. Computers uses ram to store and keep track of information. It takes variable values and stores it in memory of computer.
    // Each value is stored an unique address in the physical memory (address) (in your ram). We just have to say the variable name, they have to use physical memory address.
    string make = "Lexus";
    string *pMake = &make;
    string model = "GS 350";
    int year = 2010;
    int *pYear = &year;
    double weight = 3402.12;
    double *pWeight = &weight;

    // This is considered printing a "pointer", a memory address.
    cout << pMake << " " << pYear << " " << pWeight << " " << endl;
    
    // "Dereferencing" a pointer, using the pointer or memory address to access value stored at the address in the ram.
    cout << *pMake << endl;

    Car Lexus_GS350("Lexus", "GS350", 2010, 3.5);
    cout << Lexus_GS350.isOld() << endl;
    Car nothing;
    cout << nothing.make << endl;

    Game Rimworld("Rimworld", "Ludeon", 2018, 'F');
    cout << Rimworld.getRating() << endl;

    BorderCollie futuredog("yo", 40, "white");


    return 0;
}