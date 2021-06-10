#include <iostream>
// iostream stands for standard input-output stream. cin, cout. 
#include <fstream>
#include <string>

using namespace std;

void login(string username, string password, string un, string pw){
    cout << "Please enter your username and password." << endl;
    cout << "Username: "; cin >> username;
    cout << "Password: "; cin >> password;

    ifstream read("data\\" + username + ".txt");
    getline(read, un);
    getline(read, pw);
    if(username==un && password==pw){
        cout << "Hello, " << username << " you are logged in!" << endl; 
    } else {
        while (true){
            cout << "Sorry, incorrect password or username, try again!" << endl;
            cout << "Username: "; cin >> username;
            cout << "Password: "; cin >> password;
            if(username==un && password==pw){
                cout << "Hello, " << username << " you are logged in!" << endl; 
                break;
            }
        }
    }
    system("PAUSE");
}

void signup(string username, string password){
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
        while (true) {
            cout << "Please enter your desired username and password." << endl;
            cout << "Username: "; cin >> username;
            cout << "Password: "; cin >> password;
            cout << "Confirm password: "; cin >> retyped_password;
        }
    }
    ofstream file;
    file.open("data\\" + username + ".txt");
    file << username << endl << password;
    file.close();
}

int main(){
    int choice;
    string username; string password; string un; string pw;
    cout << "Would you like to login or register an account:" << endl;


    while(true) {
        cout << "Login: 1" << endl; cout << "Sign Up: 2" << endl;
        cin >> choice;
        if (choice == 1) {
            login(username, password, un, pw);
            break;         
        } else if (choice == 2){
            signup(username, password);
        }
    }


    return 0;
}