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
        int *id, char[] *champion, int *k, int *d, int *a;
    public:
        def get_id()
    
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