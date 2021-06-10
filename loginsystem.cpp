#include <iostream>
// iostream stands for standard input-output stream. cin, cout. 
#include <fstream>
#include <string>
#include <filesystem>

using namespace std;

void login(string username, string password, string un, string pw){
    cout << "Please enter your username and password." << endl;
    cout << "Username: "; cin >> username;
    cout << "Password: "; cin >> password;

    ifstream read("login_data\\" + username + ".txt");
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
                cout << "Hello, " << username << " you have successfully logged in!" << endl; 
                break;
            }
        }
    }
    system("PAUSE");
}

void signup(string username, string password){
    string retyped_password; string un;

    while(true){
        cout << "Please enter your desired username and password." << endl;
        cout << "Username: "; cin >> username;
        cout << "Password: "; cin >> password;
        cout << "Confirm password: "; cin >> retyped_password;   
        ifstream read("login_data\\" + username + ".txt");
        getline(read, un);

        if(username==un){
            cout << "Sorry, that username already exists. If it is yours, please sign in. Otherwise, choose a new username." << endl;
            continue;
        } else if(password!=retyped_password){
            cout << "Your passwords do not match. Please try again." << endl;
            continue;
        } else {
            cout << "Congratulations, your account has been created!" << endl;
            break;
        }

    }

    // Saving account information in .txt file.
    ofstream file;
    file.open("login_data\\" + username + ".txt");
    file << username << endl << password;
    file.close();

}

int main(){
    int choice;
    string username; string password; string un; string pw;
    cout << "Would you like to login or register an account?" << endl;


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