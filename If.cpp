//
//  main.cpp
//  If
//
//  Created by Tej Patel on 20/01/18.
//  Copyright © 2018 Tej Patel. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {

        string password = "hello";
        cout << "Enter your password \n";
        
        string input;
        cin >> input;
        
        if(input == password)
        {
            cout << "Password accepted. \n";
        }
        
        if(input != password)
        {
            cout << "Access denied. \n";
        }
    return 0;
}
