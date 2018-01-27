//
//  main.cpp
//  Break
//
//  Created by Tej Patel on 22/01/18.
//  Copyright © 2018 Tej Patel. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    
    string password = "hello";
    
    string input;
    
    do {
        cout << "Enter your password\n";
        cin >> input;
        
        if (input == password) {
            break;
        }
        else {
            cout << "Access denied.\n";
        }
        
    } while (true);
    
    cout << "Password accepted\n";
    
    cout << "Program quitting ...\n";
    
    return 0;
}

