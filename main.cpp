//
//  main.cpp
//  Switch
//
//  Created by Tej Patel on 24/01/18.
//  Copyright © 2018 Tej Patel. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    
    cout << " Type 1 to use For loop\n";
    
    cout << " Type 2 to use While loop\n";

    cout << " Type 3 to use Do While loop\n";
    
      cout << " Enter your choice\n";
    
    
    int input;
    cin >> input;
    
    int i = 0;
    

    

    
    
    switch (input) {
        case 1:
            
            for (i = 0; i< 3; i++)
            {
                
                cout << "Boom \n";
            }            break;
        case 2:
            while(i < 3)
            {
                cout << "Hey \n";
                
                i++;
            }

            break;
        case 3:
            do {
                cout << "Ka-Boom\n";
               i++;
                
                
           } while (i < 3);
            break;
        default:
            cout << "Wrong Input\n";
    }
    
    return 0;
}
