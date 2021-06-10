#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;
// Maybe track year of each car
void log_rental(string name, string phonenumber, string licenseplate, string make, string model, double payment, int days){
    time_t now = time(0);
    // Idk what the * for char* does. &now is the pointer. 
    char* dt = ctime(&now);
    // Don't have to do std::ofstream, but looks cool.
    std::ofstream file;
    file.open("carrental\\log.txt", std::ios_base::app);
    file << name << endl << phonenumber << endl << licenseplate << endl << make << endl << model << endl << payment << endl << days << endl << dt << "==========================================================" << endl;
    file.close();
}


int main(){
    log_rental("Joseph", "9167376676", "8AO4DWOS", "Lexus", "GS350", 252.50, 7);

    return 0;
}

