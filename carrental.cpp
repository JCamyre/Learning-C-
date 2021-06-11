#include <iostream>
#include <fstream>
#include <ctime>
#include <string>

using namespace std;
// Maybe track year of each car
void log_rental(string name, string phonenumber, string licenseplate, string make, string model, double payment, int days){
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
    string line;
    ifstream read("carrental\\available.txt");
    while(getline(read, line)){
        cout << line.find("Lexus") << endl;
    }
}

void log_available_cars(){
    
}

int main(){
    int choice;

    if(choice==1){
        // Customer wants to rent a car. If car available, log_rental();
    }
    // log_rental("Joseph", "9167376676", "8AO4DWOS", "Lexus", "GS350", 252.50, 7);
    string line;
    ifstream read("carrental\\log.txt");
    while(getline(read, line)){
        int a = line.string::find("Lexus");
        // std::string::npos is equal to the last possible position for the string, which is what is returned if line.string::find() doesn't get a match
        if(a!=std::string::npos){
            cout << line << endl;
        }
    }

    return 0;
}

