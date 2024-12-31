#include <iostream>
#include "../service/iphone_service.hpp"
#include "../view/teble.hpp"

using namespace std;

class UI {
private:
    // Method to capture user input for options
    static int insertOption() {
        int choice;
        cout << "[+] Enter your choice: ";
        cin >> choice;
        return choice;
    }

    // Welcome message
    static void welcome() {
        cout << "-------------------------------------------\n";
        cout << "   Welcome to IPhone Management System     \n";
        cout << "-------------------------------------------\n";
    }

    // Display menu options
    static void option() {
        cout << "1. Add a new iPhone\n";
        cout << "2. Delete an iPhone\n";
        cout << "3. View all iPhones\n";
        cout << "4. Exit\n";
        cout << "-------------------------------------------\n";
    }

public:
    // Main method to interact with the user
    static void home() {
        welcome();
        while (true) {
            option();
            int choice = insertOption();
            switch (choice) {
                case 1: {
                    cout << "[+] Add a new iPhone\n";
                    int id;
                    string model;
                    double price;

                    // Get user input for new iPhone
                    cout << "Enter iPhone ID: ";
                    cin >> id;
                    cout << "Enter iPhone Model: ";
                    cin.ignore();  // To handle the newline left in the buffer
                    getline(cin, model);
                    cout << "Enter iPhone Price: ";
                    cin >> price;

                    // Create the iPhone and add it
                    addIPhone(IPhone(id, model, price));
                    break;
                }
                case 2: {
                    cout << "[+] Delete an iPhone\n";
                    int id;
                    cout << "Enter the ID of the iPhone to delete: ";
                    cin >> id;

                    // Call delete function
                    bool deleted = deleteIPhoneById(id);
                    if (deleted) {
                        cout << "[+] iPhone deleted successfully.\n";
                    } else {
                        cout << "[-] iPhone with ID " << id << " not found.\n";
                    }
                    break;
                }
                case 3: {
                    cout << "[+] View all iPhones\n";
                    vector<vector<string>> iphones;
                    // Columns for the table
                    vector<string> columns = {"ID", "Model", "Price"};
                    
                    // Loop through all iPhones and collect their data
                    for (IPhone p : getAllIPhones()) {
                        vector<string> data = {to_string(p.getId()), p.getModel(), to_string(p.getPrice())};
                        iphones.push_back(data);
                    }

                    // Print the table of iPhones
                    printTable(iphones, columns);
                    break;
                }
                case 4: {
                    cout << "[+] Exiting...\n";
                    return;  // Use return instead of exit to properly end the program
                }
                default: {
                    cout << "[-] Invalid choice. Please try again.\n";
                    break;
                }
            }
        }
    }
};
