#include <iostream>
// iostream stands for standard input-output stream. cin, cout. 
#include <fstream>
#include <string>

using namespace std;

void login(){

}

void signup(){

}

int main(){
    // string un, pw;
    // string username = "joemama";
    // // ifstream is the variable type, read is the name of the variable, and we passing in the location of the file as an argument
    // // Good thing with ifstream: even if file doesn't exist, doesn't throw an error.
    // ifstream read("data\\" + username + ".txt");
    // getline(read, un);
    // getline(read, pw);
    // cout << un << endl << pw << endl;

    bool loggedin = false;
    int choice;
    string username; string password; string un; string pw;
    cout << "Would you like to login or register an account:" << endl;
    cout << "Login: 1" << endl; cout << "Sign Up: 2" << endl;
    cin >> choice;

    switch(choice) {
        // Login
        case 1:
            cout << "Please enter your username and password." << endl;
            cout << "Username: "; cin >> username;
            cout << "Password: "; cin >> password;

            ifstream read("data\\" + username + ".txt");
            getline(read, un);
            getline(read, pw);
            if(username==un && password==pw){
                cout << "You are logged in!" << endl;
            } else {
                while (!loggedin){

                }
                cout << "Sorry, incorrect password or username, try again!" << endl;
            }
            // Logic for checking for file with "username.txt", and check to see if info the same.
            break;
        // Register
        case 2: 
            string retyped_password;
            cout << "Please enter your desired username and password." << endl;
            cout << "Username: "; cin >> username;
            cout << "Password: "; cin >> password;
            cout << "Confirm password: "; cin >> retyped_password;
            if(password == retyped_password) {
                cout << "Congratulations, your account has been created!" << endl;
                // Condition for if username already exists. else if() {}
            } else {
                cout << "There seems to be an error while creating your account. Ensure you retyped your password correctly." << endl;
                while (!loggedin) {
                    cout << "Please enter your desired username and password." << endl;
                    cout << "Username: "; cin >> username;
                    cout << "Password: "; cin >> password;
                    cout << "Confirm password: "; cin >> retyped_password;
                }
            }
            // Add code for registering user
    }


    return 0;
}