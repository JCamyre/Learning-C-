#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

// I should be more explicit with the methods I am using. I.e: std::cout << std::endl;, std::printf('\n');

void data_types(){
    int age = 18;
    char grade = 'A';
    // char name[6] = {'J', 'o', 's', 'e', 'p', 'h'};
    char name[] = "Joseph";  // string name = "Joseph"; Same thing, just have an array of chars that act as a string
    float weight = 154.5;
    std::printf("Hello, my name is %s, I am %d years old and I weigh %f, I am an %c student!\n", name, age, weight, grade);
    std::cout << age << endl << grade << endl << name << endl << weight << std::endl;
}

// Classes
class Match {
    private:    
        int *id; // so are these pointers, so they are supposed to hold addresses. So do I dereference then set it equal to passed in setter value.
        // we have to store the address of the passed in variable so we know what to reference and edit (we aren't making a copy of their passed in value, we are inplace modifying the variable)
        string *champion; // can't do char[] *champion
        int *k; // we define as pointer, but when we do *k = blah blah, value at k address == blah blah
        int *d;
        int *a;
    public:
    // Getters and setters (use public methods to create/read/update private values in object)
        void setKda(int *kills, int *deaths, int *assists){ // call by reference, we take in the address of the variable we want to save and we store that one in the object
            // will this take the private variable and set it equal to the dereferenced passed in address and add one to stored value?
            *k = *kills;
            *d = *deaths;
            *a = *assists;
        }
    
        int getKda(){
            return *k, *d, *a;
        }
}

void pointers(){
    // dereferencing
    // call by reference vs call by value
}

void file_io(){

}


int main() {
    data_types();

    return 0;
}