//
//  main.cpp
//  Sorted and Count
//
//  Created by Tej Patel
//  Copyright © 2018 Tej Patel. All rights reserved.
//

#include <iostream>
#include <string>


using namespace std;
void count(string input);


int main() {
   
    string input;
    
    
    cout <<"Enter a Paragraph\n\n";
    
    getline (cin,input);
    
    
    count(input);
    
    return 0;
}

void count(string input)
{
     int counter=1, loopcounter=0;
    for(int i=0; i<int(input.length()); i++)
    {
        loopcounter++;
                if(isspace(input[i]))
            counter++;
    
    }
    cout << loopcounter <<endl;

    cout << "No. of words are  " << counter <<endl;
    
        
}


