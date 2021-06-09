#include <iostream>
// iostream stands for standard input-output stream. cin, cout. 

using namespace std;

void login(){

}

void signup(){

}

int main(){
<<<<<<< HEAD
    bool loggedin = false;
    int choice;
    string username;
    string password;
    cout << "Would you like to login or register an account:" << endl;
    cout << "Login: 1" << endl; cout << "Sign Up: 2" << endl;
    cin >> choice;
    while(!loggedin) {
        switch(choice) {
            // Login
            case 1:
                cout << "Please enter your username and password." << endl;
                cout << "Username: "; cin >> username;
                cout << "Password: "; cin >> password;
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
                    while (password != retyped_password) {
                        cout << "Please enter your desired username and password." << endl;
                        cout << "Username: "; cin >> username;
                        cout << "Password: "; cin >> password;
                        cout << "Confirm password: "; cin >> retyped_password;
                    }
                }
                // Add code for registering user
        }
    }
=======
    // bool loggedin = false;
    // int choice;
    // string username;
    // string password;
    // cout << "Would you like to login or register an account:" << endl;
    // cout << "Login: 1" << endl; cout << "Sign Up: 2" << endl;
    // cin >> choice;
    // while(!loggedin) {
    //     switch(choice) {
    //         // Login
    //         case 1:
    //             cout << "Please enter your username and password." << endl;
    //             cout << "Username: "; cin >> username;
    //             cout << "Password: "; cin >> password;
    //             break;
    //         // Register
    //         case 2: 
    //             string retyped_password;
    //             cout << "Please enter your desired username and password." << endl;
    //             cout << "Username: "; cin >> username;
    //             cout << "Password: "; cin >> password;
    //             cout << "Confirm password: "; cin >> retyped_password;
    //             if(password == retyped_password) {
    //                 cout << "Congratulations, your account has been created!" << endl;
    //                 // Add code for registering user
    //                 // Condition for if username already exists. else if() {}
    //             } else {
    //                 cout << "There seems to be an error while creating your account. Ensure you retyped your password correctly." << endl;
    //             }
    //     }
    // }
>>>>>>> ecce41064e9fafe1433f381f34187ae22868c874

    return 0;
}