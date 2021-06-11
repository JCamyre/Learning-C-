#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <stdio.h>

using namespace std;
// Maybe track year of each car
void log_rental(string name, string phonenumber, string licenseplate, string make, string model, int days){
    double payment;
    // For now constant rent rates
    payment = 40 + (40 * days);

    // Getting current datetime
    time_t now = time(0);
    // Idk what the * for char* does. &now is the pointer. 
    char* dt = ctime(&now);
    // Don't have to do std::ofstream, but looks cool.
    std::ofstream file;
    // std::ios_base::app is how we append to file instead of overwrite.
    file.open("carrental\\log.txt", std::ios_base::app);
    file << "Name: " << name << endl << "Phone number: " << phonenumber << endl << "License plate: " << licenseplate << endl << "Make: " << make << endl;
    file << "Model: " << model << endl << "Payment: " << payment << endl << "Days: " << days << endl << "Date: " << dt << "==========================================================" << endl;
    file.close();
    // If a car is rented, we have to take off available.txt. Identify car by License plate.

}

bool log_available_cars(string licenseplate){
    // Idea for this: have a temp.txt where you append the lines of car information. Then delete the original available.txt, and rename temp.txt to available.txt.
    string line;
    bool car_available = false;

    // Updating available cars file
    ifstream read("carrental\\available.txt");
    ofstream file;
    file.open("carrental\\temp.txt");
    while(getline(read, line)){
        if(line.find(licenseplate)!=std::string::npos){
            car_available = true;
        } else {
            file << line << endl;
        }
    }
    file.close();
    read.close();

    if(remove("carrental\\available.txt")!=0){
        perror("Error renaming file");
    }

    char oldname[] = "carrental\\temp.txt";
    char newname[] = "carrental\\available.txt";
    
    if(rename(oldname, newname)!=0){
        perror("Error renaming file");
    }

    return car_available;
}

int main(){
    int choice;
    int days;
    string licenseplate; string make; string model; string name; string phonenumber;


    cout << "Are we renting (1) or returning (2) a car today?" << endl; cin >> choice;
    cout << "Okay great, can you give me the licenseplate number of that car please? "; cin >> licenseplate;
    if(choice==1){
        if(log_available_cars(licenseplate)){
            cout << "This car is available! How many days would you like to rent this car out for? It is a flat rate of $" << 40 << " and costs $" << 40 << " per day!" << endl;
            cout << "Days: "; cin >> days;
            cout << "The make and model aswell please." << endl;
            cout << "Make: "; cin >> make; cout << endl;
            cout << "Model: "; cin >> model; cout << endl;
            cout << "Finally, can I get your name and phonenumber?" << endl;
            cout << "Name: "; cin >> name;
            cout << "Phone number: "; cin >> phonenumber;
            log_rental("Joseph", "9167376676", "8AO4DWOS", "Lexus", "GS350", 252.50, 7);
        }
        
        // Customer wants to rent a car. If car available, log_rental();
    }
    string line;
    ifstream read("carrental\\log.txt");
    ofstream file;
    file.open("carrental\\log.txt", std::ios_base::app);
    
    string kw = "Lexus";
    while(getline(read, line)){
        int a = line.string::find(kw);
        // std::string::npos is equal to the last possible position for the string, which is what is returned if line.string::find() doesn't get a match
        if(a!=std::string::npos){
            file << line << endl;
            line.replace(a, kw.length(), "");
        }
    }

    return 0;
}

