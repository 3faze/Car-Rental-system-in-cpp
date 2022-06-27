#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool loggedin = false;

void help() {
    cout << "Seems like you need help, here is a list of available actions: \n";
    string acts = "help - displays a list of available actions for the user.\n";
    cout << acts;
}


void reg() {
    string username, password;
    cout << "Username(musn't contain spaces): ";
    cin >> username;
    cout << "\n";
    cout << "Password(musn't contain spaces): ";
    cin >> password;
    cout << "Very well, you are logged in.";
    loggedin = true;
}
int main()
{
    if (loggedin == true) {
        string username, password;

        cout << "Car rental syste: Welcome!\n";

        string input;

        cout << "user > ";
        cin >> input;

        if (input == "help" || input == "Help") {
            help();
        }
    }
    else {
        reg();
    }
    
    return 0;
}
