#include <iostream>
using namespace std;
/*double calculateTotal(int item, int quantity) {
    double price;
    switch (item) {
        case 1: price = 10.0; break;
        case 2: price = 8.0; break;
        case 3: price = 5.0; break;
        default: return 0;
    }
    return price * quantity;
}

int main() {
    int item, quantity;
    char choice;

    do {
        cout << "Menu:\n1. Pizza - $10\n2. Burger - $8\n3. Salad - $5\n";
        cout << "Enter item number: ";
        cin >> item;
        cout << "Enter quantity: ";
        cin >> quantity;

        double total = calculateTotal(item, quantity);
        if (total > 0)
            cout << "Total Bill: $" << total << endl;
        else
            cout << "Invalid selection. Try again.\n";

        cout << "Do you want to order more? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for your order!\n";

    return 0;
}*/

//probelem 2
/*do {
int hours, fee = 0;
cout << "Enter hours parked: ";
cin >> hours;
if (hours > 2) {
    if (hours <= 5) fee = (hours - 2) * 2;
    else fee = 3 * 2 + (hours - 5) * 5;
}
cout << "Fee: $" << fee << "\nAnother customer? (1-Yes, 0-No): ";
cin >> choice;
} while (choice);
return 0;*/

//problem 3
/*double balance = 500;
    do {
        int a;
        double amount;
        cin >> a;
        
        if (a == 1) { cout << "Enter deposit amount: "; cin >> amount; balance += amount; }
        else if (option == 2) {
            cout << "Enter withdrawal amount: "; cin >> amount;
            if (amount > balance) cout << "Insufficient Funds\n";
            else balance -= amount;
        }
        else if (option == 3) cout << "Balance: $" << balance << "\n";
        else break;
    } while (true);
}*/

//problem 4
/*do {
        int movie, tickets, total = 0;
        cout << "Movies:\n1. A - $8\n2. B - $10\n3. C - $12\nSelect movie: ";
        cin >> movie;
        cout << "Enter tickets: ";
        cin >> tickets;
        
        switch (movie) {
            case 1: total = 8 * tickets; break;
            case 2: total = 10 * tickets; break;
            case 3: total = 12 * tickets; break;
            default: cout << "Invalid choice.\n"; continue;
        }
        
        cout << "Total Cost: $" << total << "\nAnother booking? (1-Yes, 0-No): ";
        cin >> choice;
    } while (choice);*/

//problem 5
/*do {
        int train, tickets, total = 0;
        cout << "Trains:\n1. X - $15\n2. Y - $20\n3. Z - $25\nSelect train: ";
        cin >> train;
        cout << "Enter tickets: ";
        cin >> tickets;
        
        switch (train) {
            case 1: total = 15 * tickets; break;
            case 2: total = 20 * tickets; break;
            case 3: total = 25 * tickets; break;
            default: cout << "Invalid choice.\n"; continue;
        }
        
        cout << "Total Fare: $" << total << "\nAnother booking? (1-Yes, 0-No): ";
        cin >> choice;
    } while (choice);*/

//problem 6
/*
int main() {
    string password, special = "!@#$%^&*()";
    int upper = 0, lower = 0, digit = 0, specialChar = 0;
    cout << "Enter password: ";
    cin >> password;
    if (password.length() >= 8) {
        for (char ch : password) {
            if (ch >= 'A' && ch <= 'Z') 
            cout << "upper";
            if (ch >= 'a' && ch <= 'z') 
            cout << "lower";
            if (ch >= '0' && ch <= '9') 
            cout<< "digit";
        }
        if (upper && lower && digit && specialChar)
            cout << "Strong Password\n";
        else
            cout << "Weak Password\n";
    } else {
        cout << "Weak Password\n";
    }
    return 0;
}*/


//problem 7
/*i#include <iostream>
using namespace std;

int main() {
    int day, month, year;
    cout << "Enter date (dd mm yyyy): ";
    cin >> day >> month >> year;
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month < 1 || month > 12 || day < 1 || day > daysInMonth[month-1]) {
        cout << "Invalid date!\n";
    } else {
        day++;
        if (day > daysInMonth[month-1]) { 
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
        cout << "Next Date: " << day << "/" << month << "/" << year << endl;
    }

    return 0;
}

    */

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.
