#include <iostream>
#include <string>
#include <vector>
#include "../model/iphone.hpp"  
#include "../repository/iphone_repo.hpp"  

using namespace std;


vector<IPhone> getAllIPhones() {
    return iphoneRepositories;
}

IPhone getIPhoneById(int id) {
    for (IPhone iphone : iphoneRepositories) {
        if (iphone.getId() == id) {  
            return iphone;
        }
    }
    return {};  
}

void addIPhone(IPhone iphone) {
    iphoneRepositories.push_back(iphone);
    cout << "[+] New iPhone added successfully\n";
}

bool deleteIPhoneById(int id) {
    for (auto it = iphoneRepositories.begin(); it != iphoneRepositories.end(); ++it) {
        if (it->getId() == id) {  
            iphoneRepositories.erase(it);
            cout << "[+] iPhone with ID " << id << " deleted successfully\n";
            return true;
        }
    }
    cout << "[-] iPhone with ID " << id << " not found.\n";
    return false;
}
