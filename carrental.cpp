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

void return_car(string licenseplate, string make, string model){
    ofstream file;
    file.open("carrental\\available.txt", std::ios_base::app);
    file << licenseplate << " " << make << " " << model << endl;
    file.close();
}

int main(){
    int choice;
    int days;
    string licenseplate; string make; string model; string name; string phonenumber;


    cout << "Are we renting (1) or returning (2) a car today?" << endl; cin >> choice;
    while(true){
        cout << "Okay great, can you give me the licenseplate number of that car please? "; cin >> licenseplate;
        cout << "The make and model aswell please." << endl;
        cout << "Make: "; cin >> make;
        cout << "Model: "; cin >> model;
        if(choice==1){
            if(log_available_cars(licenseplate)){
                cout << "This car is available! How many days would you like to rent this car out for? It is a flat rate of $" << 40 << " and costs $" << 40 << " per day!" << endl;
                cout << "Days: "; cin >> days;
                cout << "Finally, can I get your name and phonenumber?" << endl;
                cout << "First name: "; cin >> name;
                // cout << "Last name: "; cin >> last_name; cout << endl;
                cout << "Phone number: "; cin >> phonenumber;
                log_rental(name, phonenumber, licenseplate, make, model, days);
                break;
            } else {
                cout << "Sorry, that car is not available at the moment. Is there another car you would like to rent?";
                continue;
            }
        } else if(choice==2){
            cout << "Okay great, we'll both your return into the system right now." << endl;
            return_car(licenseplate, make, model);
            break;
        }
    }

    return 0;
}

