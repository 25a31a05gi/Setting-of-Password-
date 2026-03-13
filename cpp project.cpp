#include <iostream>
using namespace std;

int main() {
    int birthyear, birthyear2;
    string name, name2, birthplace, birthplace2;
    int password, confirm, loginpass;
    int attempts = 0;
    int choice;

    // Create password
    cout << "Enter your password: ";
    cin >> password;

    cout << "Confirm it by re-entering: ";
    cin >> confirm;

    if (password != confirm) {
        cout << "Password mismatch! Restart program.";
        return 0;
    }

    // Security questions
    cout << "\nAnswer the security questions\n";
    cout << "1. Enter birth year: ";
    cin >> birthyear;

    cout << "2. Enter your name: ";
    cin >> name;

    cout << "3. Enter birthplace: ";
    cin >> birthplace;

    // Login section
    while (attempts < 3) {
        cout << "\nEnter your password to login: ";
        cin >> loginpass;

        if (loginpass == password) {
            cout << "Access Granted!";
            return 0;
        } else {
            attempts++;
            cout << "Wrong password!\n";
        }
    }

    cout << "\nAccess declined after 3 attempts.";

    // Forgot password option
    cout << "\nPress 1 for Forgot Password: ";
    cin >> choice;

    if (choice == 1) {
        cout << "\nAnswer security questions again\n";

        cout << "Enter birth year: ";
        cin >> birthyear2;

        cout << "Enter your name: ";
        cin >> name2;

        cout << "Enter birthplace: ";
        cin >> birthplace2;

        if (birthyear == birthyear2 && name == name2 && birthplace == birthplace2) {
            cout << "\nEnter new password: ";
            cin >> password;

            cout << "Your password has been changed to new password.";
        } else {
            cout << "Security answers incorrect!";
        }
    }

    return 0;
}