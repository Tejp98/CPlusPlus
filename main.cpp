//
//  main.cpp
//  Loops
//
//  Created by Tej Patel on 21/01/18.
//  Copyright © 2018 Tej Patel. All rights reserved.
//
#include <iostream>
using namespace std;

int main() {
    
    string password = "hello";
    
    string input;
    
    do {
        cout << "Enter your password \n";
        cin >> input;
        
        if(input != password) {
            cout << "Access denied.\n";
        }
        
    } while (input != password);
    
    
    cout << "Password accepted.\n";
    

    
    
    int i=0;
    
    while(i < 5)
    {
        cout << "Hey \n";
        
        i++;
    }
    
    cout << "Programming quitting.\n";
    
    
    
    
    for (int j = 0; j < 3; j++)
    {
        
        cout << "Boom \n";
    }
    
    
    
    
    
    
    
    
    
    
    return 0;
}
