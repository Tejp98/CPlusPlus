//
//  main.cpp
//  ArrayOfPointers
//
//  Created by Tej Patel on 11/05/18.
//  Copyright © 2018 Tej Patel. All rights reserved.
//

#include <iostream>


#include <string>
#include <ctype.h>

using namespace std;

int main()
{
    char *pointer[4] = { "books","games","sports","computer"};
    
    char input[25];
    cout << "Enter your hobby\n";
    cin >> input;
    for(int i=0; i<4;i++)
    {
        if(strcmp(input, pointer[i]) == 0)
        {
            cout << "\n Your hobby available\n";
            break;
        }
        if( i==3 && strcmp(input, pointer[i]) != 0)
            cout << "\n Not available\n";
        }
    return 0;
}
