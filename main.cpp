#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Add New Password Entry
void addpassword()
{
    ofstream file("Credentials.txt", ios::app); // Append mode

    string site;
    string username;
    string password;

    cin.ignore(); // Clear leftover newline from previous input

    cout << "Enter Site Name/URL: ";
    getline(cin, site);
    cout << "Enter Site Username: ";
    getline(cin, username);
    cout << "Enter Password: ";
    getline(cin, password);

    if (file.is_open())
    {
        file << "----------------------------------" << endl;
        file << "Website: " << site << endl;
        file << "Username: " << username << endl;
        file << "Password: " << password << endl;
        file << "----------------------------------" << endl;
        file.close();
        cout << "Credentials saved to file!" << endl;
    }
    else
    {
        cout << "Error opening file." << endl;
    }
}

// Placeholder for Viewing Passwords
void viewpassword()
{
    cout << "Coming soon..." << endl;
}

// Placeholder for Deleting Passwords
void deletepassword()
{
    cout << "Coming soon..." << endl;
}

int main()
{
    int choice;

    do {
        cout << "\n==============================" << endl;
        cout << "DEV: hussein-momen on GitHub" << endl;
        cout << " Password Manager Menu" << endl;
        cout << "1. Add New Password" << endl;
        cout << "2. View All Passwords" << endl;
        cout << "3. Delete Entry" << endl;
        cout << "99. Exit" << endl;
        cout << "==============================" << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addpassword();
            break;
        case 2:
            viewpassword();
            break;
        case 3:
            deletepassword();
            break;
        case 99:
            cout << "Exiting... Goodbye!\n";
            break;
        default:
            cout << " Invalid Input. Try Again.\n";
        }

    } while (choice != 99);

    return 0;
}
