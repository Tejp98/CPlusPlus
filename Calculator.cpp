//
//  main.cpp
//  Calculator
//
//  Created by Tej Patel on 27/01/18.
//  Copyright © 2018 Tej Patel. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    cout << "Enter a to add\n";
    cout << "Enter s to subtraction\n";
    cout << "Enter m to multiply\n";
    cout << "Enter d to divide\n";
   
    
    
    cout << "Enter two numbers to perform operation\n";
    float num1, num2;
    cin >> num1 >> num2;

    
    
    cout << "Enter the first operation you want to do\n";
    string firstchoice;
    cin >> firstchoice;
    float firstResult;
    
    if (firstchoice == "a")
        firstResult = num1 + num2;
    else if(firstchoice == "s")
        firstResult = num1 - num2;
    else if(firstchoice == "m")
        firstResult = num1 * num2;
    else if(firstchoice == "d")
        firstResult = num1 / num2;
        else
            cout << "Enter a valid choice\n";
    
    cout << "Result is    "<< firstResult << endl;
    
    
    cout << "Enter q to quit\n";
    cout << "Enter c to continue\n";
    cout << "Your move\n";
    string move;
    cin >> move;
    
    float number3 =0;
    
    float Result = firstResult;
    

    
    if( move == "c")
    {
    
   
    do {
        
        
    
    cout << "Enter your choice and if you want to end the program type q.   \n";
        
    string choice;
    cin >> choice;
       
        
        
        if (choice == "a"){
            cout << "Enter a new number\n";
            cin >> number3;

            Result = Result + number3;
         cout << "Result is   "<< Result << endl;
        }
        else if(choice == "s"){
            cout << "Enter a new number\n";
            cin >> number3;

        
            Result = Result - number3;
         cout << "Result is   "<< Result << endl;
        }

        else if(choice == "m"){
            cout << "Enter a new number\n";
            cin >> number3;

        
            Result = Result * number3;
            cout << "Result is   "<< Result << endl;
            
        }

        else if(choice == "d"){
            cout << "Enter a new number\n";
            cin >> number3;

            Result = Result / number3;
         cout << "Result is   "<< Result << endl;
        }
        
        else if(choice == "q")
            break;

        else
            cout << "Enter a valid choice\n";
        
       
        

    
    
    }while(move == "c");
    }

    return 0;
}
